/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol INVCVoiceShortcutClient;
@interface INVoiceShortcutCenter : NSObject {

	id<INVCVoiceShortcutClient> _voiceShortcutClient;

}

@property (setter=_setVoiceShortcutClient:,nonatomic,retain) id<INVCVoiceShortcutClient> voiceShortcutClient;              //@synthesize voiceShortcutClient=_voiceShortcutClient - In the implementation block
+(void)initialize;
+(id)sharedCenter;
-(id)init;
-(void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithVoiceShortcutClient:(id)arg1 ;
-(void)getAllVoiceShortcutsWithCompletion:(/*^block*/id)arg1 ;
-(void)setShortcutSuggestions:(id)arg1 ;
-(id<INVCVoiceShortcutClient>)voiceShortcutClient;
-(void)_setVoiceShortcutClient:(id)arg1 ;
@end

