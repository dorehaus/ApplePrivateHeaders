/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGSuggestionsServiceRemindersProtocol <_SGSuggestionsServiceBaseProtocol,_SGSuggestionsServiceFoundInAppsProtocol>
@required
-(void)allRemindersLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;
-(void)reminderTitleForContent:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)logUserCreatedReminderTitle:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)confirmReminderByRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)confirmRealtimeReminder:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)rejectReminderByRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)rejectRealtimeReminder:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)reminderAlarmTriggeredForRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

