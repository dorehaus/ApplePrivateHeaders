/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PPContactServerProtocol <PPFeedbackAccepting>
@required
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)contactNameRecordChangesForClient:(id)arg1 completion:(/*^block*/id)arg2;
-(void)contactNameRecordChangesForClient:(id)arg1 queryId:(unsigned long long)arg2;
-(void)contactNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2;
-(void)contactHandlesForSource:(id)arg1 queryId:(unsigned long long)arg2;
-(void)contactHandlesForTopics:(id)arg1 queryId:(unsigned long long)arg2;
-(void)rankedContactsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;

@end

