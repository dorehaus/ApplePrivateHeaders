/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityKit.framework/Versions/A/AccessibilityKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXKKeyboardFocusListener;
@interface _AXKKeyboardFocusListenerWrapper : NSObject {

	id<AXKKeyboardFocusListener> _listener;

}

@property (assign,nonatomic,__weak) id<AXKKeyboardFocusListener> listener;              //@synthesize listener=_listener - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<AXKKeyboardFocusListener>)listener;
-(void)setListener:(id<AXKKeyboardFocusListener>)arg1 ;
-(id)initWithListener:(id)arg1 ;
@end
