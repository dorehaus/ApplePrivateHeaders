/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BRCItemID, BRCItemGlobalID, BRCStatInfo, BRCUserRowID, BRCAccountSession, BRCServerZone, BRCClientZone;


@protocol BRCItem <NSCopying,NSSecureCoding>
@property (nonatomic,readonly) char isDead; 
@property (nonatomic,readonly) char isLive; 
@property (nonatomic,readonly) char isBRAlias; 
@property (nonatomic,readonly) char isPackage; 
@property (nonatomic,readonly) char isDocument; 
@property (nonatomic,readonly) char isDirectory; 
@property (nonatomic,readonly) char isFSRoot; 
@property (nonatomic,readonly) char isZoneRoot; 
@property (nonatomic,readonly) char isSymLink; 
@property (nonatomic,readonly) char isFinderBookmark; 
@property (nonatomic,readonly) char isOwnedByMe; 
@property (nonatomic,readonly) char isSharedByMe; 
@property (nonatomic,readonly) char hasShareIDAndIsOwnedByMe; 
@property (nonatomic,readonly) char isShared; 
@property (nonatomic,readonly) char isSharedToMe; 
@property (nonatomic,readonly) char isSharedToMeTopLevelItem; 
@property (nonatomic,readonly) char isSharedToMeChildItem; 
@property (nonatomic,readonly) char isTopLevelSharedItem; 
@property (nonatomic,readonly) char isChildSharedItem; 
@property (nonatomic,readonly) BRCItemID * itemID; 
@property (nonatomic,readonly) BRCItemGlobalID * itemGlobalID; 
@property (nonatomic,readonly) BRCStatInfo * st; 
@property (nonatomic,readonly) BRCUserRowID * ownerKey; 
@property (nonatomic,readonly) BRCAccountSession * session; 
@property (nonatomic,readonly) BRCServerZone * serverZone; 
@property (nonatomic,readonly) BRCClientZone * clientZone; 
@property (assign,nonatomic) unsigned long long sharingOptions; 
@required
-(char)isDirectory;
-(BRCItemID *)itemID;
-(char)isPackage;
-(char)isDead;
-(BRCAccountSession *)session;
-(char)isShared;
-(char)isTopLevelSharedItem;
-(char)isBRAlias;
-(char)isLive;
-(char)isFinderBookmark;
-(char)isDocument;
-(char)isSharedToMe;
-(char)isSharedByMe;
-(char)isSymLink;
-(BRCClientZone *)clientZone;
-(BRCStatInfo *)st;
-(BRCItemGlobalID *)itemGlobalID;
-(char)isFSRoot;
-(unsigned long long)sharingOptions;
-(BRCUserRowID *)ownerKey;
-(char)isZoneRoot;
-(char)isSharedToMeTopLevelItem;
-(char)isSharedToMeChildItem;
-(char)hasShareIDAndIsOwnedByMe;
-(char)isOwnedByMe;
-(BRCServerZone *)serverZone;
-(char)validateLoggingToFile:(_sFILE*)arg1;
-(char)isChildSharedItem;
-(void)setSharingOptions:(unsigned long long)arg1;

@end

