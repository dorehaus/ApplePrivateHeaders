/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/Versions/A/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostInterval.h>

@class NSArray, NSSet;

@interface SignpostAnimationInterval : SignpostInterval {

	NSArray* _allCommits;
	NSArray* _longCommits;
	NSArray* _allSystemwideCommits;
	NSArray* _longSystemwideCommits;
	NSArray* _compositeIntervals;
	NSArray* _allTransactionLifetimes;
	NSArray* _longTransactionLifetimes;
	NSArray* _allFrameLatencies;
	NSArray* _allContributedFrameLatencies;
	NSArray* _longFrameLatencies;
	NSArray* _contributedLongFrameLatencies;
	NSArray* _allFrameLifetimes;
	NSArray* _allContributedFrameLifetimes;
	NSArray* _longFrameLifetimes;
	NSArray* _longContributedFrameLifetimes;
	NSArray* _allHIDLatencies;
	NSArray* _longHIDLatencies;
	NSArray* _allRenderServerRenders;
	NSArray* _longRenderServerRenders;
	NSSet* _allFirstFrameLifetimesWithCommits;

}

@property (nonatomic,readonly) NSSet * allFirstFrameLifetimesWithCommits;               //@synthesize allFirstFrameLifetimesWithCommits=_allFirstFrameLifetimesWithCommits - In the implementation block
@property (nonatomic,retain) NSArray * compositeIntervals;                              //@synthesize compositeIntervals=_compositeIntervals - In the implementation block
@property (nonatomic,readonly) NSArray * allCommits;                                    //@synthesize allCommits=_allCommits - In the implementation block
@property (nonatomic,readonly) NSArray * longCommits;                                   //@synthesize longCommits=_longCommits - In the implementation block
@property (nonatomic,readonly) NSArray * allSystemwideCommits;                          //@synthesize allSystemwideCommits=_allSystemwideCommits - In the implementation block
@property (nonatomic,readonly) NSArray * longSystemwideCommits;                         //@synthesize longSystemwideCommits=_longSystemwideCommits - In the implementation block
@property (nonatomic,readonly) float frameRate; 
@property (nonatomic,readonly) unsigned long long frameCount; 
@property (nonatomic,readonly) NSArray * allTransactionLifetimes;                       //@synthesize allTransactionLifetimes=_allTransactionLifetimes - In the implementation block
@property (nonatomic,readonly) NSArray * longTransactionLifetimes;                      //@synthesize longTransactionLifetimes=_longTransactionLifetimes - In the implementation block
@property (nonatomic,readonly) NSArray * allFrameLatencies;                             //@synthesize allFrameLatencies=_allFrameLatencies - In the implementation block
@property (nonatomic,readonly) NSArray * allContributedFrameLatencies;                  //@synthesize allContributedFrameLatencies=_allContributedFrameLatencies - In the implementation block
@property (nonatomic,readonly) NSArray * longFrameLatencies;                            //@synthesize longFrameLatencies=_longFrameLatencies - In the implementation block
@property (nonatomic,readonly) NSArray * contributedLongFrameLatencies;                 //@synthesize contributedLongFrameLatencies=_contributedLongFrameLatencies - In the implementation block
@property (nonatomic,readonly) NSArray * allFrameLifetimes;                             //@synthesize allFrameLifetimes=_allFrameLifetimes - In the implementation block
@property (nonatomic,readonly) NSArray * allContributedFrameLifetimes;                  //@synthesize allContributedFrameLifetimes=_allContributedFrameLifetimes - In the implementation block
@property (nonatomic,readonly) NSArray * longFrameLifetimes;                            //@synthesize longFrameLifetimes=_longFrameLifetimes - In the implementation block
@property (nonatomic,readonly) NSArray * longContributedFrameLifetimes;                 //@synthesize longContributedFrameLifetimes=_longContributedFrameLifetimes - In the implementation block
@property (nonatomic,readonly) NSArray * allHIDLatencies;                               //@synthesize allHIDLatencies=_allHIDLatencies - In the implementation block
@property (nonatomic,readonly) NSArray * longHIDLatencies;                              //@synthesize longHIDLatencies=_longHIDLatencies - In the implementation block
@property (nonatomic,readonly) NSArray * allRenderServerRenders;                        //@synthesize allRenderServerRenders=_allRenderServerRenders - In the implementation block
@property (nonatomic,readonly) NSArray * longRenderServerRenders;                       //@synthesize longRenderServerRenders=_longRenderServerRenders - In the implementation block
@property (nonatomic,readonly) NSArray * glitches; 
@property (nonatomic,readonly) NSArray * contributedGlitches; 
@property (nonatomic,readonly) double glitchTimeRatio; 
@property (nonatomic,readonly) double glitchTimeRatioMsPerS; 
@property (nonatomic,readonly) NSArray * firstFrameGlitches; 
@property (nonatomic,readonly) NSArray * contributedFirstFrameGlitches; 
@property (nonatomic,readonly) double firstFrameGlitchTimeRatio; 
@property (nonatomic,readonly) double firstFrameGlitchTimeRatioMsPerS; 
@property (nonatomic,readonly) NSArray * nonFirstFrameGlitches; 
@property (nonatomic,readonly) NSArray * contributedNonFirstFrameGlitches; 
@property (nonatomic,readonly) double nonFirstFrameGlitchTimeRatio; 
@property (nonatomic,readonly) double nonFirstFrameGlitchTimeRatioMsPerS; 
+(id)serializationTypeNumber;
-(char)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(float)frameRate;
-(unsigned long long)frameCount;
-(NSArray *)longTransactionLifetimes;
-(NSArray *)allTransactionLifetimes;
-(NSArray *)longHIDLatencies;
-(NSArray *)allHIDLatencies;
-(NSArray *)longFrameLatencies;
-(NSArray *)allFrameLatencies;
-(NSArray *)longFrameLifetimes;
-(NSArray *)allFrameLifetimes;
-(NSArray *)longContributedFrameLifetimes;
-(NSArray *)allContributedFrameLifetimes;
-(id)initWithBeginEvent:(id)arg1 endEvent:(id)arg2 accumulatedState:(id)arg3 ;
-(id)humanReadableType;
-(id)_dictionaryRepresentationWithIsHumanReadable:(char)arg1 shouldRedact:(char)arg2 ;
-(NSArray *)compositeIntervals;
-(NSArray *)glitches;
-(double)glitchTimeRatioMsPerS;
-(NSArray *)firstFrameGlitches;
-(double)firstFrameGlitchTimeRatioMsPerS;
-(NSArray *)nonFirstFrameGlitches;
-(double)nonFirstFrameGlitchTimeRatioMsPerS;
-(id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(char)arg3 ;
-(id)_intervalTypeString;
-(double)durationToFirstEndSeconds:(id)arg1 ;
-(NSArray *)allContributedFrameLatencies;
-(NSArray *)longCommits;
-(NSArray *)allCommits;
-(NSArray *)longSystemwideCommits;
-(NSArray *)allSystemwideCommits;
-(NSArray *)longRenderServerRenders;
-(NSArray *)allRenderServerRenders;
-(NSArray *)contributedGlitches;
-(NSArray *)contributedFirstFrameGlitches;
-(NSArray *)contributedNonFirstFrameGlitches;
-(NSSet *)allFirstFrameLifetimesWithCommits;
-(double)_timeRatioForTimeIntervalArray:(id)arg1 ;
-(double)glitchTimeRatio;
-(double)firstFrameGlitchTimeRatio;
-(double)nonFirstFrameGlitchTimeRatio;
-(id)_statsStringForTimeIntervals:(id)arg1 label:(id)arg2 ;
-(id)_detailedFrameDescription;
-(id)_poorPerfFrameDescription;
-(id)_animationStatsDescription;
-(id)_frameDescription;
-(unsigned long long)durationToFirstBeginMachContinuousTime:(id)arg1 ;
-(unsigned long long)durationToFirstEndMachContinuousTime:(id)arg1 ;
-(double)durationToFirstBeginSeconds:(id)arg1 ;
-(void)setCompositeIntervals:(NSArray *)arg1 ;
-(NSArray *)contributedLongFrameLatencies;
@end

