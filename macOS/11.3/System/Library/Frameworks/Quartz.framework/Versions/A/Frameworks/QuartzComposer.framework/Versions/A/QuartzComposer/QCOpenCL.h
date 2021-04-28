/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCProgrammablePatch.h>

@class NSString, QCStreamManager, QCPatch;

@interface QCOpenCL : QCProgrammablePatch {

	NSString* _kernelName;
	CFArrayRef _argumentInfos;
	CFArrayRef _argumentCache;
	CFArrayRef _resultInfos;
	CFArrayRef _functions;
	CFArrayRef _kernels;
	cl_kernelRef _kernel;
	cl_programRef _program;
	cl_device_idRef _device;
	cl_device_idRef _currentDevice;
	char _useBestDevice;
	char _useLocalKernel;
	char _automaticThreadDimensions;
	char _automaticOutputDimensions;
	char _customPixelFormat;
	char _zeroOutputs;
	unsigned long long _deviceIndex;
	unsigned long long _selectedKernel;
	unsigned long long _workGroupSize;
	QCStreamManager* _manager;
	QCPatch* _rootPatch;
	id _ui;
	unsigned long long _saveGlobalSize[3];
	unsigned long long _saveLocalSize[3];
	NSString* _saveResultInfoString;
	char _sample;
	double _sampleTime;
	char _settingsVisible;

}

@property (assign) unsigned long long selectedKernel;              //@synthesize selectedKernel=_selectedKernel - In the implementation block
+(void)initialize;
+(unsigned long long)stateVersionWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(id)sourceTypes;
+(int)indicesType;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(void)setDevice:(cl_contextRef)arg1 forComposition:(id)arg2 ;
+(void)setProgram:(cl_programRef)arg1 forComposition:(id)arg2 ;
+(void)setSource:(id)arg1 forComposition:(id)arg2 ;
+(id)sourceForComposition:(id)arg1 ;
+(CFArrayRef)functionNamesForComposition:(id)arg1 ;
+(cl_contextRef)deviceForComposition:(id)arg1 ;
+(cl_programRef)programForComposition:(id)arg1 ;
+(void)releaseCompositions:(id)arg1 ;
+(void)addPatch:(id)arg1 forComposition:(id)arg2 ;
+(void)removePatch:(id)arg1 forComposition:(id)arg2 ;
+(id)parseFunctionsForComposition:(id)arg1 ;
+(id)compileStatusForComposition:(id)arg1 ;
+(id)kernelNamesForComposition:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(id)_functionNames;
-(void)setDeviceIndex:(unsigned long long)arg1 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(id)compileSourceOfType:(id)arg1 ;
-(id)attributesForParameterPortWithInfo:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3 ;
-(void)cleanup:(id)arg1 ;
-(id)createInputWithPortClass:(Class)arg1 forKey:(id)arg2 attributes:(id)arg3 arguments:(id)arg4 order:(unsigned long long)arg5 ;
-(id)serializedValueForStateKey:(id)arg1 ;
-(char)_updateDevice;
-(id)_parseKernel:(id)arg1 kernelName:(id)arg2 ;
-(id)_setSelectedKernel:(unsigned long long)arg1 source:(id)arg2 ;
-(void)_parseFunctionsAndKernels:(id)arg1 ;
-(void)setUseBestDevice:(char)arg1 ;
-(void)setAutomaticThreadDimensions:(char)arg1 ;
-(void)setAutomaticOutputDimensions:(char)arg1 ;
-(void)setCustomPixelFormat:(char)arg1 ;
-(void)setSelectedKernel:(unsigned long long)arg1 ;
-(void)setSelectedKernel:(unsigned long long)arg1 ;
-(void)setUseLocalKernel:(char)arg1 ;
-(unsigned long long)selectedKernel;
-(void)_computeKernelDimensions:(CFArrayRef)arg1 kernelExecutionInfo:(KernelExecutionInfo*)arg2 globalDim:(unsigned long long*)arg3 globalDimCount:(unsigned long long*)arg4 localDim:(unsigned long long*)arg5 localDimCount:(unsigned long long*)arg6 ;
-(void)_setGlobalSize:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)_setLocalSize:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)_updateInputArguments;
-(void)_updateOutputArguments:(CFArrayRef)arg1 ;
-(void)setSampleKernel:(char)arg1 ;
-(id)inputArgumentsInfoString;
-(id)outputArgumentsInfoString;
-(id)_compileGlobalKernel:(id)arg1 ;
-(id)_compileKernel:(id)arg1 ;
-(CFArrayRef)_executeKernel:(CFArrayRef)arg1 context:(id)arg2 kernelExecutionInfo:(KernelExecutionInfo*)arg3 ;
-(void)finalize_QCOpenCL;
-(void)_initRootPatch;
-(id)_kernelNames;
-(unsigned long long)_lineOfFunction:(unsigned long long)arg1 ;
-(void)_setUI:(id)arg1 ;
-(id)globalWorkSizeString;
-(id)localWorkSizeString;
-(id)computeDeviceString;
-(void)setComputeDeviceString:(id)arg1 ;
-(void)setOutputArgumentsInfoString:(id)arg1 ;
-(void)setInputArgumentsInfoString:(id)arg1 ;
-(void)setGlobalWorkSizeString:(id)arg1 ;
-(void)setLocalWorkSizeString:(id)arg1 ;
-(void)setSampleString:(id)arg1 ;
-(id)sampleString;
@end

