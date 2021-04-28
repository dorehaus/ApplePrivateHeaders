/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CLIPSShimDelegate;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class AnalyticsWorkspace, ImpoExpoService, NSObject, NSMutableDictionary, NSMutableString, NSString, NSMutableSet;

@interface CLIPSShim : NSObject {

	AnalyticsWorkspace* _clipsWorkspace;
	ImpoExpoService* _ieService;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _strongAddressType;
	id<CLIPSShimDelegate> _delegate;
	NSMutableDictionary* _modules;
	void* _environment;
	NSMutableString* _dumpedString;
	NSMutableString* _consoleContents;
	NSString* _currentCommand;
	unsigned long long _commandStringLoc;
	NSMutableSet* _clipsHeldObjects;
	NSMutableDictionary* _invocationMap;
	NSMutableDictionary* _pendingOTAUpdates;
	SCD_Struct_CL44* _consoleNameRegex;
	SCD_Struct_CL44* _dumpStringRegex;

}

@property (assign,nonatomic) unsigned strongAddressType;                           //@synthesize strongAddressType=_strongAddressType - In the implementation block
@property (assign,nonatomic) void* environment;                                    //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL45* consoleNameRegex;                    //@synthesize consoleNameRegex=_consoleNameRegex - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL45* dumpStringRegex;                     //@synthesize dumpStringRegex=_dumpStringRegex - In the implementation block
@property (nonatomic,retain) NSMutableString * dumpedString;                       //@synthesize dumpedString=_dumpedString - In the implementation block
@property (nonatomic,retain) NSMutableString * consoleContents;                    //@synthesize consoleContents=_consoleContents - In the implementation block
@property (nonatomic,retain) NSString * currentCommand;                            //@synthesize currentCommand=_currentCommand - In the implementation block
@property (assign,nonatomic) unsigned long long commandStringLoc;                  //@synthesize commandStringLoc=_commandStringLoc - In the implementation block
@property (nonatomic,retain) NSMutableSet * clipsHeldObjects;                      //@synthesize clipsHeldObjects=_clipsHeldObjects - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * invocationMap;                  //@synthesize invocationMap=_invocationMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingOTAUpdates;              //@synthesize pendingOTAUpdates=_pendingOTAUpdates - In the implementation block
@property (assign,nonatomic,__weak) id<CLIPSShimDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * modules;                      //@synthesize modules=_modules - In the implementation block
+(id)sharedInstance;
+(CCCryptorRef)cryptor;
+(id)dataSectionNameForModule:(id)arg1 ;
+(id)decodeAndInflateCLIPSString:(id)arg1 ;
+(id)decryptCLIPSData:(id)arg1 forModule:(id)arg2 ;
+(id)createDecryptedCLPData:(const void*)arg1 length:(unsigned long long)arg2 ;
-(long long)run;
-(void)dealloc;
-(id)init;
-(id<CLIPSShimDelegate>)delegate;
-(void)setDelegate:(id<CLIPSShimDelegate>)arg1 ;
-(void)setEnvironment:(void*)arg1 ;
-(void)reset;
-(NSString *)currentCommand;
-(void*)environment;
-(void)clear;
-(void)log:(id)arg1 ;
-(void)setQueue:(id)arg1 ;
-(void)reportError:(id)arg1 ;
-(NSMutableDictionary *)modules;
-(long long)run:(long long)arg1 ;
-(long long)memoryUsed;
-(void)retractFact:(void*)arg1 ;
-(void)setCommandString:(id)arg1 ;
-(id)moduleNames;
-(char)conservePrettyPrintMemory:(char)arg1 ;
-(char)initializeWorkspace;
-(void)logMemoryStatistics:(id)arg1 ;
-(void)unloadConstructsForModule:(id)arg1 unconditionally:(char)arg2 ;
-(long long)releaseAllFreeMemory;
-(void)logFacts:(long long)arg1 ;
-(void)releaseFact:(void*)arg1 ;
-(void)retainFact:(void*)arg1 ;
-(long long)constructLoadStateForModule:(id)arg1 ;
-(void)registerCallbackFunction:(id)arg1 selector:(SEL)arg2 target:(id)arg3 ;
-(void)deactivateModule:(id)arg1 ;
-(void)setOTAUpdate:(id)arg1 version:(id)arg2 module:(id)arg3 ;
-(char)addModuleNamed:(id)arg1 withConstruct:(id)arg2 ;
-(char)loadConstructsForModule:(id)arg1 ;
-(void)updateAllModuleInfos;
-(void*)assertFactString:(id)arg1 moduleName:(id)arg2 ;
-(void*)deftemplateNamed:(id)arg1 moduleName:(id)arg2 ;
-(id)slotsStringForTemplate:(id)arg1 fromDictionary:(id)arg2 moduleName:(id)arg3 ;
-(id)matchFactsWithDeftemplateName:(id)arg1 withSlotKeyValues:(id)arg2 ;
-(id)currentRuleName;
-(id)setCurrentModule:(id)arg1 ;
-(id)deftemplatesMatchingPrefix:(id)arg1 ;
-(void)logMemoryStatistics:(id)arg1 verboseOnly:(char)arg2 ;
-(void)setCommandStringLoc:(unsigned long long)arg1 ;
-(void)setCurrentCommand:(NSString *)arg1 ;
-(id)objectFromMultifieldArg:(void*)arg1 start:(long long)arg2 end:(long long)arg3 ;
-(void)addCallbackInvocation:(id)arg1 invocation:(id)arg2 ;
-(id)swapConsoleBuffer:(id)arg1 ;
-(id)consoleBuffer;
-(id)printedFacts:(id)arg1 limit:(long long)arg2 ;
-(void)_logFactsForModule:(id)arg1 limit:(long long)arg2 when:(long long)arg3 ;
-(unsigned long long)factCount;
-(char)factIsImportant:(id)arg1 ;
-(char)addNewConstruct:(id)arg1 ;
-(id)loadDataSection:(id)arg1 ;
-(id)parseCLIPSModuleInfoFromConstructs:(id)arg1 ;
-(id)otaUpdatePlatformStringForDeviceClass:(long long)arg1 ;
-(int)executeBatchCommand:(id)arg1 module:(id)arg2 ;
-(void)updateModuleInfoForModule:(id)arg1 slotValues:(id)arg2 ;
-(id)stringFromConstructsLoadState:(long long)arg1 ;
-(id)factDictionaryForFact:(void*)arg1 ;
-(id)factStringForFactDictionary:(id)arg1 ;
-(id)objectForDO:(dataObject*)arg1 ;
-(id)getValueForSlotNamed:(id)arg1 fromFact:(void*)arg2 ;
-(id)currentModule;
-(void)performOnFactsWithDeftemplateName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeCallbackInvocation:(id)arg1 ;
-(void*)addObjectToEnvironment:(id)arg1 ;
-(id)dumpEngineStatusWithContext:(id)arg1 ;
-(id)moduleRulesByName:(id)arg1 ;
-(void)executeCommand:(id)arg1 moduleName:(id)arg2 ;
-(void)pushFocus:(id)arg1 ;
-(void*)getNextFact:(void*)arg1 ;
-(void)listAllDeftemplates;
-(unsigned)strongAddressType;
-(void)setStrongAddressType:(unsigned)arg1 ;
-(SCD_Struct_CL45*)consoleNameRegex;
-(void)setConsoleNameRegex:(SCD_Struct_CL45*)arg1 ;
-(SCD_Struct_CL45*)dumpStringRegex;
-(void)setDumpStringRegex:(SCD_Struct_CL45*)arg1 ;
-(NSMutableString *)dumpedString;
-(void)setDumpedString:(NSMutableString *)arg1 ;
-(NSMutableString *)consoleContents;
-(void)setConsoleContents:(NSMutableString *)arg1 ;
-(unsigned long long)commandStringLoc;
-(NSMutableSet *)clipsHeldObjects;
-(void)setClipsHeldObjects:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)invocationMap;
-(void)setInvocationMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)pendingOTAUpdates;
-(void)setPendingOTAUpdates:(NSMutableDictionary *)arg1 ;
@end

