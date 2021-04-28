/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReader.framework/Versions/A/Frameworks/ScreenReaderOutput.framework/Versions/A/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCROBrailleDriverProtocol <NSObject>
@optional
-(void)setBrailleDriverDelegate:(id)arg1;

@required
-(unsigned long long)interfaceVersion;
-(char)isInputEnabled;
-(id)modelIdentifier;
-(int)loadDriverWithIOElement:(id)arg1;
-(char)unloadDriver;
-(char)isDriverLoaded;
-(char)isSleeping;
-(char)supportsBlinkingCursor;
-(char)postsKeyboardEvents;
-(int)brailleInputMode;
-(id)getInputEvents;
-(long long)mainSize;
-(long long)statusSize;
-(char)setMainCells:(const char*)arg1 length:(long long)arg2;
-(char)setStatusCells:(const char*)arg1 length:(long long)arg2;

@end

