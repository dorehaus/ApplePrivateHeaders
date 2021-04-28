/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailCore/MCByteStatusProgressEntry.h>

@interface MCSavingDraftProgressEntry : MCByteStatusProgressEntry {

	char _userInitiated;

}

@property (assign,nonatomic) char userInitiated;              //@synthesize userInitiated=_userInitiated - In the implementation block
+(id)keyPathsAffectingValuesForProgressName;
+(id)keyPathsAffectingValuesForShouldDisplay;
-(char)userInitiated;
-(void)setUserInitiated:(char)arg1 ;
-(char)shouldDisplay;
-(id)observedProgressKeypaths;
-(void)refreshValues;
-(id)progressName;
-(id)progressSlice;
-(double)finishDelay;
@end

