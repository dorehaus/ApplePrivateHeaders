/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitEventRouter.framework/Versions/A/HomeKitEventRouter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMapTable, NSHashTable;

@interface HMETrieNode : NSObject {

	NSString* _key;
	NSMapTable* _children;
	NSHashTable* _consumers;

}

@property (nonatomic,copy,readonly) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSMapTable * children;                //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) NSHashTable * consumers;              //@synthesize consumers=_consumers - In the implementation block
-(NSString *)key;
-(NSMapTable *)children;
-(NSHashTable *)consumers;
@end
