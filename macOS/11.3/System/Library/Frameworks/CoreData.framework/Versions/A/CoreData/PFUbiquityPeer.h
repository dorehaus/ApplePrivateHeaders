/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface PFUbiquityPeer : NSManagedObject

@property (nonatomic,retain) NSString * peerKey; 
@property (nonatomic,retain) NSString * peerCode; 
@property (nonatomic,retain) NSSet * remoteStates; 
@property (nonatomic,retain) NSSet * primaryKeyRanges; 
@property (nonatomic,retain) NSSet * transactionEntries; 
@property (nonatomic,retain) NSSet * localPeerStates; 
+(id)allPeersInManagedObjectContext:(id)arg1 ;
+(id)peerForPeerID:(id)arg1 inManagedObjectContext:(id)arg2 createIfMissing:(char)arg3 ;
@end

