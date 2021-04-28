/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AMPLibrary.framework/Versions/A/AMPLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AMPLibrary/AMPLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AMPArtworkRequest : NSObject <NSSecureCoding> {

	NSString* _uuid;
	CGSize _size;

}

@property (nonatomic,retain) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) CGSize size;                  //@synthesize size=_size - In the implementation block
+(char)supportsSecureCoding;
-(CGSize)size;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
@end

