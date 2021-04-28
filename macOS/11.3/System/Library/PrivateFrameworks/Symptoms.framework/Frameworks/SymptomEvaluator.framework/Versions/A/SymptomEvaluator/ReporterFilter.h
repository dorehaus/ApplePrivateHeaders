/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSObject, NSString, NSMutableArray, NSData;

@interface ReporterFilter : NSObject {

	NSObject*<OS_dispatch_source> _finalTimer;
	BOOL _timingInProgress;
	sym_filter* _transportFilters;
	BOOL _symptomFilterChanged;
	unsigned _reporterId;
	NSString* _reporterName;
	NSMutableArray* _symptomFilters;
	NSData* _filterMessage;

}

@property (nonatomic,readonly) unsigned reporterId;                          //@synthesize reporterId=_reporterId - In the implementation block
@property (nonatomic,readonly) NSString * reporterName;                      //@synthesize reporterName=_reporterName - In the implementation block
@property (nonatomic,readonly) NSMutableArray * symptomFilters;              //@synthesize symptomFilters=_symptomFilters - In the implementation block
@property (assign,nonatomic) BOOL symptomFilterChanged;                      //@synthesize symptomFilterChanged=_symptomFilterChanged - In the implementation block
@property (nonatomic,readonly) NSData * filterMessage;                       //@synthesize filterMessage=_filterMessage - In the implementation block
+(void)initialize;
+(id)filterForName:(id)arg1 id:(id)arg2 ;
+(void)enumerateReporterFiltersUsingBlock:(/*^block*/id)arg1 ;
+(id)filterForId:(unsigned)arg1 ;
-(id)description;
-(id)init;
-(int)configureSymptomFilter:(id)arg1 ;
-(NSMutableArray *)symptomFilters;
-(BOOL)hasFinalTimer;
-(void)setFinalTimer:(long long)arg1 ;
-(void)updateTransportFilters;
-(void)pushTransportFilters;
-(void)pushFinalFilters;
-(void)setSymptomFilter:(id)arg1 ;
-(unsigned)reporterId;
-(NSString *)reporterName;
-(BOOL)symptomFilterChanged;
-(void)setSymptomFilterChanged:(BOOL)arg1 ;
-(NSData *)filterMessage;
@end

