/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailCore/MCProgressEntry.h>

@interface MCCheckingForMailProgressEntry : MCProgressEntry {

	char _foundNewUnreadMessageInInbox;
	char _userInitiated;
	unsigned long long _foundMessages;

}

@property (assign,nonatomic) unsigned long long foundMessages;               //@synthesize foundMessages=_foundMessages - In the implementation block
@property (assign,nonatomic) char foundNewUnreadMessageInInbox;              //@synthesize foundNewUnreadMessageInInbox=_foundNewUnreadMessageInInbox - In the implementation block
@property (assign,nonatomic) char userInitiated;                             //@synthesize userInitiated=_userInitiated - In the implementation block
+(id)keyPathsForValuesAffectingStatusText;
+(id)keyPathsForValuesAffectingProgressName;
+(id)keyPathsForValuesAffectingShouldDisplay;
-(char)indeterminate;
-(id)statusText;
-(char)userInitiated;
-(void)setUserInitiated:(char)arg1 ;
-(char)shouldDisplay;
-(id)observedProgressKeypaths;
-(void)refreshValues;
-(unsigned long long)foundMessages;
-(void)setFoundMessages:(unsigned long long)arg1 ;
-(char)foundNewUnreadMessageInInbox;
-(void)setFoundNewUnreadMessageInInbox:(char)arg1 ;
-(id)progressName;
-(id)progressSlice;
-(double)finishDelay;
@end

