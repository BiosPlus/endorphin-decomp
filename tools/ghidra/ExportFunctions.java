// Native Java GhidraScript to export functions and decompiled C pseudocode for Endorphin 2.7.1
// Usage via ghidra-analyzeHeadless:
//   /usr/bin/ghidra-analyzeHeadless .local/ghidra_proj endorphin -import .local/bin/endorphin.exe -scriptPath tools/ghidra -postScript ExportFunctions.java
//@category Decompilation

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionManager;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;

public class ExportFunctions extends GhidraScript {
    @Override
    protected void run() throws Exception {
        File cacheDir = new File(".local/cache/ghidra_c");
        if (!cacheDir.exists()) {
            cacheDir.mkdirs();
        }

        DecompInterface decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.openProgram(currentProgram);

        FunctionManager fm = currentProgram.getFunctionManager();
        FunctionIterator iter = fm.getFunctions(true);
        int count = 0;

        while (iter.hasNext() && !monitor.isCancelled()) {
            Function fn = iter.next();
            Address entry = fn.getEntryPoint();
            long offset = entry.getOffset();
            if (offset < 0x00401000L || offset >= 0x009221CAL) {
                continue;
            }
            String addrHex = String.format("0x%08X", offset);
            DecompileResults res = decomp.decompileFunction(fn, 30, monitor);
            if (res != null && res.decompileCompleted() && res.getDecompiledFunction() != null) {
                String cCode = res.getDecompiledFunction().getC();
                File outFile = new File(cacheDir, addrHex + ".c");
                try (BufferedWriter w = new BufferedWriter(new FileWriter(outFile))) {
                    w.write("// Ghidra Decompiled Function: " + fn.getName() + " (" + addrHex + ")\n");
                    w.write(cCode);
                }
            }
            count++;
        }

        decomp.dispose();
        println("Exported " + count + " functions from Ghidra to .local/cache/ghidra_c/");
    }
}
