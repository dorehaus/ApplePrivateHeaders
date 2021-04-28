/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriUISiriLanguageDelegate;
@class NSString;

@interface SiriUISiriLanguage : NSObject {

	char _macBuddyChecked;
	char _macBuddyRunning;
	NSString* _spokenLanguageCode;
	id<SiriUISiriLanguageDelegate> _delegate;

}

@property (getter=_delegate,nonatomic,__weak,readonly) id<SiriUISiriLanguageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setSpokenLanguageCode:,nonatomic,copy) NSString * spokenLanguageCode;                     //@synthesize spokenLanguageCode=_spokenLanguageCode - In the implementation block
@property (assign,nonatomic) char macBuddyChecked;                                                           //@synthesize macBuddyChecked=_macBuddyChecked - In the implementation block
@property (assign,getter=_isMacBuddyRunning,nonatomic) char macBuddyRunning;                                 //@synthesize macBuddyRunning=_macBuddyRunning - In the implementation block
-(id)init;
-(id)_delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)_currentLocaleDidChange:(id)arg1 ;
-(NSString *)spokenLanguageCode;
-(id)_computeSpokenLanguageCode;
-(void)_spokenLanguageDidChange:(id)arg1 ;
-(void)_updateSpokenLanguageCode;
-(void)_setSpokenLanguageCode:(id)arg1 ;
-(char)_isMacBuddyRunning;
-(char)macBuddyChecked;
-(void)setMacBuddyChecked:(char)arg1 ;
-(void)setMacBuddyRunning:(char)arg1 ;
@end
