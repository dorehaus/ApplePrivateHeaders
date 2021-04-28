/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>

@protocol ISScalableCompositorResource;
@class ISIconDecoration, NSString;

@interface ISIconDecorationResource : NSObject <ISScalableCompositorResource> {

	ISIconDecoration* _decoration;
	id<ISScalableCompositorResource> _internalResource;

}

@property (readonly) id<ISScalableCompositorResource> internalResource;              //@synthesize internalResource=_internalResource - In the implementation block
@property (readonly) ISIconDecoration * decoration;                                  //@synthesize decoration=_decoration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithType:(id)arg1 ;
-(id)initWithDecoration:(id)arg1 ;
-(id<ISScalableCompositorResource>)internalResource;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(ISIconDecoration *)decoration;
@end

