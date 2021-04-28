/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CATIDSSubscription.h>

@protocol CRKIDSListener;
@interface CRKListenerBackedCatalystIDSSubscription : NSObject <CATIDSSubscription> {

	id<CRKIDSListener> _listener;

}

@property (nonatomic,readonly) id<CRKIDSListener> listener;              //@synthesize listener=_listener - In the implementation block
-(id<CRKIDSListener>)listener;
-(void)cancel;
-(id)initWithListenr:(id)arg1 ;
@end

