/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, VCVoiceShortcutManagedObject;

@interface VCVoiceShortcutSyncStateManagedObject : NSManagedObject

@property (assign,nonatomic) char hasSynced; 
@property (nonatomic,retain) NSData * metadata; 
@property (nonatomic,copy) NSString * syncServiceIdentifier; 
@property (nonatomic,retain) VCVoiceShortcutManagedObject * voiceShortcut; 
+(id)fetchRequest;
@end

