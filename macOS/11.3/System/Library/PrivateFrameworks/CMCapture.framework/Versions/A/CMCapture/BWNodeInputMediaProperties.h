/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BWNodeInput, BWFormat, BWVideoFormat;

@interface BWNodeInputMediaProperties : NSObject {

	NSString* _associatedAttachedMediaKey;
	BWNodeInput* _owningNodeInput;
	BWFormat* _resolvedFormat;
	BWFormat* _liveFormat;

}

@property (nonatomic,retain) BWFormat * resolvedFormat; 
@property (nonatomic,readonly) BWVideoFormat * resolvedVideoFormat; 
@property (nonatomic,readonly) BWFormat * liveFormat;                            //@synthesize liveFormat=_liveFormat - In the implementation block
@property (nonatomic,readonly) BWVideoFormat * liveVideoFormat; 
-(void)dealloc;
-(BWFormat *)liveFormat;
-(void)setResolvedFormat:(BWFormat *)arg1 ;
-(BWVideoFormat *)resolvedVideoFormat;
-(BWFormat *)resolvedFormat;
-(void)setLiveFormat:(BWFormat *)arg1 ;
-(id)resolvedPointCloudFormat;
-(BWVideoFormat *)liveVideoFormat;
-(void)_setOwningNodeInput:(id)arg1 associatedAttachedMediaKey:(id)arg2 ;
-(id)liveFormatFormat;
@end

