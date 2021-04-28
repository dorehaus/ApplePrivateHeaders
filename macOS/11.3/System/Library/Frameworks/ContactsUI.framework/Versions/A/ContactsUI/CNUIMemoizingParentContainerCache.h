/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNUIParentContainerCache.h>

@class CNCache, NSString;

@interface CNUIMemoizingParentContainerCache : NSObject <CNUIParentContainerCache> {

	CNCache* _containerByContactIdentifier;

}

@property (nonatomic,readonly) CNCache * containerByContactIdentifier;              //@synthesize containerByContactIdentifier=_containerByContactIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)clear;
-(id)containerForContact:(id)arg1 ;
-(id)initWitCache:(id)arg1 ;
-(CNCache *)containerByContactIdentifier;
-(id)parentContainerOfContact:(id)arg1 ;
-(void)setParentContainer:(id)arg1 ofContact:(id)arg2 ;
-(void)udpateWithContactFetchResult:(id)arg1 ;
@end

