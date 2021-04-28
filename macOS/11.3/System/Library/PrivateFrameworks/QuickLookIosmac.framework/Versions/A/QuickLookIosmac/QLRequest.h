/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/QuickLookIosmac.framework/Versions/A/QuickLookIosmac
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLookIosmac/QuickLookIosmac-Structs.h>
@class QLRequestSession, NSUUID;

@interface QLRequest : NSObject {

	int _discardError;
	/*^block*/id _generationWillStartBlock;
	/*^block*/id _replyCreatedWithBitmapBlock;
	QLRequestSession* _session;
	QLRequestRef _requestRef;
	NSUUID* _uuid;

}

@property (assign) int discardError;                                    //@synthesize discardError=_discardError - In the implementation block
@property (nonatomic,copy) id generationWillStartBlock;                 //@synthesize generationWillStartBlock=_generationWillStartBlock - In the implementation block
@property (nonatomic,copy) id replyCreatedWithBitmapBlock;              //@synthesize replyCreatedWithBitmapBlock=_replyCreatedWithBitmapBlock - In the implementation block
@property (retain) QLRequestSession * session;                          //@synthesize session=_session - In the implementation block
@property (retain) NSUUID * uuid;                                       //@synthesize uuid=_uuid - In the implementation block
@property (readonly) QLRequestRef requestRef;                           //@synthesize requestRef=_requestRef - In the implementation block
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(QLRequestSession *)session;
-(void)setSession:(QLRequestSession *)arg1 ;
-(void)teardown;
-(int)discardError;
-(id)generationWillStartBlock;
-(void)setGenerationWillStartBlock:(id)arg1 ;
-(id)initWithRequestRef:(QLRequestRef)arg1 ;
-(void)setDiscardError:(int)arg1 ;
-(id)replyCreatedWithBitmapBlock;
-(void)setReplyCreatedWithBitmapBlock:(id)arg1 ;
-(QLRequestRef)requestRef;
@end

