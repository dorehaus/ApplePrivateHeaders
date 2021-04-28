/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreJapaneseEngine.framework/Versions/A/CoreJapaneseEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreJapaneseEngine/CoreJapaneseEngine-Structs.h>
@class NSPanel, NSTextField;

@interface JIMReadingGuide : NSObject {

	char _hidden;
	long long _windowLevel;
	NSPanel* _window;
	NSTextField* _textField;

}

@property (retain) NSPanel * window;                             //@synthesize window=_window - In the implementation block
@property (__weak) NSTextField * textField;                      //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) long long windowLevel;              //@synthesize windowLevel=_windowLevel - In the implementation block
@property (assign) char hidden;                                  //@synthesize hidden=_hidden - In the implementation block
+(id)sharedReadingGuide;
-(void)setHidden:(char)arg1 ;
-(char)hidden;
-(NSPanel *)window;
-(void)setWindow:(NSPanel *)arg1 ;
-(long long)windowLevel;
-(NSTextField *)textField;
-(void)setTextField:(NSTextField *)arg1 ;
-(void)setWindowLevel:(long long)arg1 ;
-(void)updateWithReading:(id)arg1 autoConfimedLength:(long long)arg2 forOriginalTextRect:(CGRect)arg3 ;
@end

