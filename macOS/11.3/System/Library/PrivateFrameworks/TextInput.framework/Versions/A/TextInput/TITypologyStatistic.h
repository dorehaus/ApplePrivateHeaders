/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface TITypologyStatistic : NSObject

@property (nonatomic,readonly) NSDictionary * structuredReport; 
@property (nonatomic,readonly) NSDictionary * aggregateReport; 
+(id)statistic;
-(void)visitTypologyLog:(id)arg1 ;
-(void)visitTypologyRecord:(id)arg1 ;
-(void)visitRecordSync:(id)arg1 ;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(void)visitRecordAutocorrections:(id)arg1 ;
-(void)visitRecordCandidateResultSet:(id)arg1 ;
-(void)visitRecordAcceptedCandidate:(id)arg1 ;
-(void)visitRecordReplacements:(id)arg1 ;
-(void)visitRecordRefinements:(id)arg1 ;
-(void)visitRecordHitTest:(id)arg1 ;
-(void)visitRecordSkipHitTest:(id)arg1 ;
-(void)visitRecordPhraseBoundaryAdjustment:(id)arg1 ;
-(void)visitRecordSetOriginalInput:(id)arg1 ;
-(void)visitRecordTextAccepted:(id)arg1 ;
-(void)visitRecordCandidateRejected:(id)arg1 ;
-(void)visitRecordLastAcceptedCandidateCorrected:(id)arg1 ;
-(void)prepareForComputation;
-(void)finalizeComputation;
-(NSDictionary *)structuredReport;
-(NSDictionary *)aggregateReport;
@end

