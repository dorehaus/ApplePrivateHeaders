/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/Versions/A/SearchUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUICardKitProviderSupport/SUICKPInteractiveCardSectionViewController.h>
#import <libobjc.A.dylib/SFFeedbackListener.h>
#import <libobjc.A.dylib/CRKEventResponding.h>

@class SFAudioPlaybackCardSection, NSView, NSString;

@interface SUICKPAudioPlaybackCardSectionViewController : SUICKPInteractiveCardSectionViewController <SFFeedbackListener, CRKEventResponding>

@property (nonatomic,retain) SFAudioPlaybackCardSection * cardSection; 
@property (nonatomic,retain) NSView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cardSectionClasses;
-(void)didEngageCardSection:(id)arg1 ;
-(void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)_performCommands:(id)arg1 applyingUserInfo:(id)arg2 ;
@end

