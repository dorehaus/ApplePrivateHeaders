/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDebugCommandEncoder <MTLCommandEncoder>
@optional
-(void)stopCapture;
-(void)dumpTexture:(id)arg1 name:(const char*)arg2;
-(void)startCaptureWithSettings:(const char*)arg1 from:(const char*)arg2;
-(void)startCaptureWithSettings:(const char*)arg1;
-(void)startCapture;
-(void)stopCapture:(const char*)arg1;
-(unsigned)getLastStartStopCaptureResult;
-(void)dumpBuffer:(id)arg1 name:(const char*)arg2;
-(void)dumpBuffer:(id)arg1;
-(void)dumpTexture:(id)arg1 name:(const char*)arg2 glMode:(char)arg3;
-(void)dumpTexture:(id)arg1;
-(void)postFinishEvent:(const char*)arg1;
-(void)postFinishEvent;

@required
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2;
-(void)IOLogBytes:(const char*)arg1 length:(unsigned long long)arg2;
-(void)kprintf:(id)arg1;
-(void)IOLog:(id)arg1;

@end

