/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKEventOperationGroupInfo : NSObject <NSSecureCoding> {

	NSString* _operationGroupID;
	NSString* _operationGroupName;

}

@property (nonatomic,readonly) NSString * operationGroupID;                //@synthesize operationGroupID=_operationGroupID - In the implementation block
@property (nonatomic,readonly) NSString * operationGroupName;              //@synthesize operationGroupName=_operationGroupName - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)operationGroupName;
-(NSString *)operationGroupID;
-(id)initWithOperationGroup:(id)arg1 ;
@end

