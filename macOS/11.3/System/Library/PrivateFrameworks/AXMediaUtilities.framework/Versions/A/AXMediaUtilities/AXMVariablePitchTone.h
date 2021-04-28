/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMTone.h>

@class NSArray;

@interface AXMVariablePitchTone : AXMTone {

	NSArray* _keyPitches;

}
-(id)initWithSampleRate:(double)arg1 envelope:(id)arg2 ;
-(void)renderInBuffer:(vector<int, std::__1::allocator<int>>*)arg1 atFrame:(unsigned long long)arg2 ;
-(id)initWithKeyPitches:(id)arg1 sampleRate:(double)arg2 envelope:(id)arg3 ;
-(unsigned long long)_bufferFrameForKeyPitch:(id)arg1 ;
@end

