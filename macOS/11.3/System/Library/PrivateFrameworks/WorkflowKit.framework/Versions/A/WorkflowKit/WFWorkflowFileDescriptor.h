/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFFileRepresentation, NSString;

@interface WFWorkflowFileDescriptor : NSObject <NSCopying, NSSecureCoding> {

	WFFileRepresentation* _file;
	NSString* _name;
	NSString* _sourceAppIdentifier;

}

@property (nonatomic,readonly) WFFileRepresentation * file;                 //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * sourceAppIdentifier;              //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sourceAppIdentifier;
-(WFFileRepresentation *)file;
-(id)initWithFile:(id)arg1 name:(id)arg2 ;
-(id)initWithFile:(id)arg1 name:(id)arg2 sourceAppIdentifier:(id)arg3 ;
@end

