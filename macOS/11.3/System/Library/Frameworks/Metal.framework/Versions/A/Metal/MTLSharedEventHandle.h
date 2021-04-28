/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MTLSharedEventHandle : NSObject <NSSecureCoding> {

	MTLSharedEventHandlePrivate* _priv;

}

@property (readonly) NSString * label; 
+(char)supportsSecureCoding;
-(id)initWithSharedEvent:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)label;
-(unsigned)eventPort;
-(unsigned long long)labelTraceID;
@end

