/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquityGlobalObjectIDCache : NSObject {

	NSString* _storeName;
	NSString* _localPeerID;
	NSMutableDictionary* _peerIDToEntityNameToPrimaryKey;
	NSRecursiveLock* _peerIDToEntityNameToPrimaryKeyLock;

}

@property (nonatomic,retain) NSString * storeName;                //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,retain) NSString * localPeerID;              //@synthesize localPeerID=_localPeerID - In the implementation block
+(id)stringValueFromArray:(id)arg1 atIndexDescribedByStringNumber:(id)arg2 ;
-(void)setLocalPeerID:(NSString *)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 forStoreName:(id)arg2 ;
-(id)createGlobalIDForCompressedString:(id)arg1 withEntityNames:(id)arg2 primaryKeys:(id)arg3 peerIDs:(id)arg4 ;
-(id)createGlobalIDForGlobalIDString:(id)arg1 ;
-(id)createGlobalIDForPrimaryKeyString:(id)arg1 entityName:(id)arg2 andOwningPeerID:(id)arg3 ;
-(id)createGlobalIDForPrimarKey:(unsigned long long)arg1 entityName:(id)arg2 andOwningPeerID:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)setStoreName:(NSString *)arg1 ;
-(NSString *)storeName;
-(void)purgeCache;
-(NSString *)localPeerID;
@end

