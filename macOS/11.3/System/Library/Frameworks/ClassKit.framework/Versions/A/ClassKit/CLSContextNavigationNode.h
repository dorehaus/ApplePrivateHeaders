/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ClassKit.framework/Versions/A/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString;

@interface CLSContextNavigationNode : CLSObject <CLSRelationable> {

	NSString* _childObjectID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * childObjectID;                //@synthesize childObjectID=_childObjectID - In the implementation block
+(char)supportsSecureCoding;
+(id)relations;
+(id)objectIDForParentContextID:(id)arg1 andChildContextID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(char)validateObject:(id*)arg1 ;
-(void)mergeWithObject:(id)arg1 ;
-(id)initWithParentContextID:(id)arg1 childContextID:(id)arg2 ;
-(NSString *)childObjectID;
-(void)setChildObjectID:(NSString *)arg1 ;
@end

