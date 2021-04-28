/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libMemoryResourceException.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
@class NSArray, NSMutableDictionary, NSMutableArray, FPTime;

@interface FPFootprint : NSObject {

	NSArray* _processes;
	NSMutableDictionary* _pidToFootprint;
	CFDictionaryRef _memoryObjects;
	CFDictionaryRef _sharedCacheTranslatedMemoryObjects;
	CFDictionaryRef _sharedCacheMemoryObjects;
	CFDictionaryRef _textMemoryObjects;
	CFDictionaryRef _linkeditMemoryObjects;
	NSMutableArray* _uniqueMemoryObjects;
	NSMutableArray* _outputFormatters;
	char _earlyExit;
	unsigned _qualityOfService;
	FPTime* _gatherStartTime;
	FPTime* _gatherEndTime;

}

@property (nonatomic,readonly) NSArray * processes;                   //@synthesize processes=_processes - In the implementation block
@property (assign,nonatomic) unsigned qualityOfService;               //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) FPTime * gatherStartTime;              //@synthesize gatherStartTime=_gatherStartTime - In the implementation block
@property (nonatomic,readonly) FPTime * gatherEndTime;                //@synthesize gatherEndTime=_gatherEndTime - In the implementation block
+(void)setBreakDownPhysFootprint:(char)arg1 ;
+(void)setSharingAnalysisDisabled:(char)arg1 ;
+(void)_totalForCategories:(id)arg1 outTotal:(SCD_Struct_FP0*)arg2 ;
+(char)breakDownPhysFootprint;
+(char)isSharingAnalysisDisabled;
+(id)_processesBySortingPidDesc:(id)arg1 ;
+(id)installCancelHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setQualityOfService:(unsigned)arg1 ;
-(void)cancel;
-(unsigned)qualityOfService;
-(NSArray *)processes;
-(id)initWithProcesses:(id)arg1 ;
-(char)gatherData;
-(void)analyzeData;
-(id)_categoriesForAllProcessesShouldSummarize:(char)arg1 ;
-(void)_addProcess:(id)arg1 ;
-(void)finalizeObjects;
-(void)_buildProcessToFootprintMap;
-(id)_notHiddenProcesses;
-(id)_processesBySortingFootprint:(id)arg1 ;
-(void)printVmmapLikeOutputForProcesses:(id)arg1 ;
-(id)_generateProcessToProcessGroups;
-(id)_categoriesForObjects:(id)arg1 viewedByProcess:(id)arg2 hasProcessView:(unsigned char*)arg3 summarize:(char)arg4 ;
-(unsigned long long)_calculateFootprintForProcess:(id)arg1 ;
-(void)addOutputFormatter:(id)arg1 ;
-(void)printOutputVerbose:(char)arg1 summarize:(char)arg2 ;
-(FPTime *)gatherStartTime;
-(FPTime *)gatherEndTime;
@end

