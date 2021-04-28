/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface WFWorkflowQuarantine : NSObject <NSCopying> {

	NSString* _sourceAppIdentifier;
	NSDate* _importDate;

}

@property (nonatomic,copy,readonly) NSString * sourceAppIdentifier;              //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * importDate;                              //@synthesize importDate=_importDate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)sourceAppIdentifier;
-(id)serializedRepresentation;
-(id)serializedData;
-(NSDate *)importDate;
-(id)initWithSerializedData:(id)arg1 ;
-(id)initWithSourceAppIdentifier:(id)arg1 importDate:(id)arg2 ;
@end
