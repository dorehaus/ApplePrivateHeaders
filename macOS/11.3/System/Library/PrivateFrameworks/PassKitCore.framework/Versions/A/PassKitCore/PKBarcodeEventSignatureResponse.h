/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKBarcodeEventSignatureResponse : NSObject <NSSecureCoding> {

	NSData* _signedData;

}

@property (nonatomic,copy) NSData * signedData;              //@synthesize signedData=_signedData - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)signedData;
-(id)initWithSignedData:(id)arg1 ;
-(void)setSignedData:(NSData *)arg1 ;
@end

