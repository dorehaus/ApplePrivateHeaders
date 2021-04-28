/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XCTAutomationSupport/XCTAutomationSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface XCAccessibilityElement : NSObject <NSCopying, NSSecureCoding> {

	int _processIdentifier;
	const AXUIElementRef _AXUIElement;
	unsigned long long _elementType;
	unsigned long long _originPlatform;
	NSData* _token;
	unsigned long long _elementOrHash;
	unsigned long long _elementID;

}

@property (copy,readonly) NSData * token;                            //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long long elementOrHash;               //@synthesize elementOrHash=_elementOrHash - In the implementation block
@property (readonly) unsigned long long elementID;                   //@synthesize elementID=_elementID - In the implementation block
@property (readonly) const AXUIElementRef AXUIElement;               //@synthesize AXUIElement=_AXUIElement - In the implementation block
@property (readonly) int processIdentifier;                          //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (readonly) unsigned long long elementType;                 //@synthesize elementType=_elementType - In the implementation block
@property (readonly) unsigned long long originPlatform;              //@synthesize originPlatform=_originPlatform - In the implementation block
+(char)supportsSecureCoding;
+(id)elementWithAXUIElement:(AXUIElementRef)arg1 ;
+(id)elementWithProcessIdentifier:(int)arg1 originPlatform:(unsigned long long)arg2 ;
+(id)elementWithProcessIdentifier:(int)arg1 ;
+(id)deviceElement;
+(id)mockElementWithProcessIdentifier:(int)arg1 originPlatform:(unsigned long long)arg2 ;
+(id)mockElementWithProcessIdentifier:(int)arg1 originPlatform:(unsigned long long)arg2 payload:(id)arg3 ;
+(id)mockElementWithProcessIdentifier:(int)arg1 ;
+(id)mockElementWithProcessIdentifier:(int)arg1 payload:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)processIdentifier;
-(unsigned long long)elementType;
-(NSData *)token;
-(const AXUIElementRef)AXUIElement;
-(unsigned long long)elementID;
-(unsigned long long)originPlatform;
-(id)initWithToken:(id)arg1 elementOrHash:(unsigned long long)arg2 elementID:(unsigned long long)arg3 pid:(int)arg4 elementType:(unsigned long long)arg5 originPlatform:(unsigned long long)arg6 ;
-(id)initWithAXUIElement:(AXUIElementRef)arg1 elementType:(unsigned long long)arg2 originPlatform:(unsigned long long)arg3 ;
-(unsigned long long)elementOrHash;
@end

