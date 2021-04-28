/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/Versions/A/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSDisplayLayoutMonitor;

@interface VCCKApplicationStateObserver : NSObject {

	char _applicationVisible;
	FBSDisplayLayoutMonitor* _layoutMonitor;

}

@property (nonatomic,readonly) FBSDisplayLayoutMonitor * layoutMonitor;                        //@synthesize layoutMonitor=_layoutMonitor - In the implementation block
@property (assign,getter=isApplicationVisible,nonatomic) char applicationVisible;              //@synthesize applicationVisible=_applicationVisible - In the implementation block
-(void)dealloc;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(char)isApplicationVisible;
-(void)setApplicationVisible:(char)arg1 ;
-(FBSDisplayLayoutMonitor *)layoutMonitor;
@end

