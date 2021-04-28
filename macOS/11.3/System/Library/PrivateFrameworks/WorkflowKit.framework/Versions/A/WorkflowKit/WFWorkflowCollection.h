/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>

@class NSString, WFWorkflowIcon;

@interface WFWorkflowCollection : WFDatabaseObjectDescriptor {

	char _folder;
	char _deleted;
	NSString* _name;
	WFWorkflowIcon* _icon;

}

@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) WFWorkflowIcon * icon;                      //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSString * systemIconName; 
@property (getter=isFolder,nonatomic,readonly) char folder;                //@synthesize folder=_folder - In the implementation block
@property (getter=isDeleted,nonatomic,readonly) char deleted;              //@synthesize deleted=_deleted - In the implementation block
+(char)supportsSecureCoding;
+(id)defaultName;
+(id)defaultIcon;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(WFWorkflowIcon *)icon;
-(char)isDeleted;
-(char)isFolder;
-(id)initWithIdentifier:(id)arg1 isFolder:(char)arg2 name:(id)arg3 icon:(id)arg4 isDeleted:(char)arg5 ;
-(NSString *)systemIconName;
@end

