/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DFRFoundation.framework/Versions/A/DFRFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DFRFoundation/DFRFoundation-Structs.h>
@interface DFRAccessibilityRemoteUIElement : NSObject {

	int _processIdentifier;
	id _accessibilityElement;
	long long _uniqueIdentifier;
	long long _placement;
	CGRect _frame;

}

@property (readonly) id accessibilityElement;                 //@synthesize accessibilityElement=_accessibilityElement - In the implementation block
@property (readonly) long long uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) int processIdentifier;                   //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (readonly) long long placement;                     //@synthesize placement=_placement - In the implementation block
@property (readonly) CGRect frame;                            //@synthesize frame=_frame - In the implementation block
+(id)elementWithBuffer:(const void*)arg1 size:(unsigned long long*)arg2 ;
+(void)setEnableNotifications:(BOOL)arg1 ;
+(id)copyElements;
+(id)hitTest:(CGPoint)arg1 ;
+(BOOL)enableNotifications;
-(long long)uniqueIdentifier;
-(int)processIdentifier;
-(CGRect)frame;
-(id)accessibilityElement;
-(long long)placement;
@end

