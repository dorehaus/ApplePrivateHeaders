/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWTrackedSurface : NSObject {

	IOSurfaceRef _surface;
	/*^block*/id _handler;
	int _clientUseCount;
	char _owningPixelBufferDeallocated;

}

@property (nonatomic,readonly) IOSurfaceRef surface;                         //@synthesize surface=_surface - In the implementation block
@property (nonatomic,readonly) id handler;                                   //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) int clientUseCount;                             //@synthesize clientUseCount=_clientUseCount - In the implementation block
@property (assign,nonatomic) char owningPixelBufferDeallocated;              //@synthesize owningPixelBufferDeallocated=_owningPixelBufferDeallocated - In the implementation block
-(void)dealloc;
-(id)handler;
-(IOSurfaceRef)surface;
-(id)initWithSurface:(IOSurfaceRef)arg1 handler:(/*^block*/id)arg2 ;
-(int)clientUseCount;
-(void)setClientUseCount:(int)arg1 ;
-(char)owningPixelBufferDeallocated;
-(void)setOwningPixelBufferDeallocated:(char)arg1 ;
@end

