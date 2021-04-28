/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKOperationGroupSystemImposedInfoConfiguration : NSObject <NSCopying, NSSecureCoding> {

	char _isUplink;
	char _allowsCellularAccess;

}

@property (assign,nonatomic) char isUplink;                          //@synthesize isUplink=_isUplink - In the implementation block
@property (assign,nonatomic) char allowsCellularAccess;              //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAllowsCellularAccess:(char)arg1 ;
-(char)allowsCellularAccess;
-(char)isUplink;
-(void)setIsUplink:(char)arg1 ;
@end

