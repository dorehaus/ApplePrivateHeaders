/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class _FBSSnapshotContext, IOSurface, NSString;

@interface _FBSSnapshot : NSObject <BSInvalidatable> {

	_FBSSnapshotContext* _context;
	CGImageRef _imageRef;
	IOSurface* _nonProtectedSurfaceRef;
	IOSurface* _protectedSurfaceRef;

}

@property (nonatomic,copy,readonly) _FBSSnapshotContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) char hasProtectedContent; 
@property (nonatomic,readonly) IOSurface * IOSurface; 
@property (nonatomic,readonly) IOSurface * fallbackIOSurface; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(double)_scale;
-(_FBSSnapshotContext *)context;
-(CGImageRef)CGImage;
-(IOSurface *)IOSurface;
-(char)hasProtectedContent;
-(void)_doInvalidate;
-(IOSurface *)fallbackIOSurface;
-(void)_synchronizedCaptureWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithSnapshotContext:(id)arg1 ;
-(char)capture;
-(CGSize)_scaledSnapshotSize;
@end

