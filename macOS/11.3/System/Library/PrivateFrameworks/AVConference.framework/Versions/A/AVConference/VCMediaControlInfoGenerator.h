/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMediaControlInfoDelegate.h>

@class NSMutableArray, NSString;

@interface VCMediaControlInfoGenerator : NSObject <VCMediaControlInfoDelegate> {

	unsigned _type;
	CFDictionaryRef _callbacksDict;
	NSMutableArray* _controlInfoPool;
	opaque_pthread_mutex_t _controlInfoPoolLock;
	unsigned char _version;
	unsigned char _fecFeedbackVersion;
	unsigned _optionBitmap;
	opaque_pthread_rwlock_t _callbackDictLock;

}

@property (readonly) unsigned type;                                 //@synthesize type=_type - In the implementation block
@property (readonly) unsigned char version;                         //@synthesize version=_version - In the implementation block
@property (assign) unsigned char fecFeedbackVersion;                //@synthesize fecFeedbackVersion=_fecFeedbackVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned)type;
-(unsigned char)version;
-(id)initWithType:(unsigned)arg1 version:(unsigned char)arg2 ;
-(void*)newControlInfo;
-(void)passMediaControlInfo:(id)arg1 isFillBlobCallback:(char)arg2 ;
-(void*)newControlInfoWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC98*)arg3 ;
-(id)newControlInfoFromPool;
-(void)setFecFeedbackVersion:(unsigned char)arg1 ;
-(void)disposeControlInfo:(id)arg1 ;
-(int)registerFillBlobCallback:(/*function pointer*/void*)arg1 processBlobCallback:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(int)deregisterCallbacksWithContext:(void*)arg1 ;
-(void*)newMediaControlInfo;
-(void*)newMediaControlInfoWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC98*)arg3 ;
-(int)addMediaControlInfoOption:(unsigned)arg1 ;
-(unsigned long long)feedbackSize;
-(unsigned char)fecFeedbackVersion;
@end

