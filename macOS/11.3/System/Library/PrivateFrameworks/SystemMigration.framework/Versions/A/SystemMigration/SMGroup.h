/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSArray;

@interface SMGroup : NSObject {

	unsigned _gid;
	NSString* _name;
	NSNumber* _groupID;
	NSString* _generatedUID;
	NSArray* _users;
	NSArray* _groupMembers;
	NSArray* _groupMembership;
	NSArray* _nestedGroups;

}

@property (retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (assign) unsigned gid;                           //@synthesize gid=_gid - In the implementation block
@property (retain) NSNumber * groupID;                     //@synthesize groupID=_groupID - In the implementation block
@property (retain) NSString * generatedUID;                //@synthesize generatedUID=_generatedUID - In the implementation block
@property (retain) NSArray * users;                        //@synthesize users=_users - In the implementation block
@property (retain) NSArray * groupMembers;                 //@synthesize groupMembers=_groupMembers - In the implementation block
@property (retain) NSArray * groupMembership;              //@synthesize groupMembership=_groupMembership - In the implementation block
@property (retain) NSArray * nestedGroups;                 //@synthesize nestedGroups=_nestedGroups - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)groupID;
-(void)setGroupID:(NSNumber *)arg1 ;
-(void)setGid:(unsigned)arg1 ;
-(unsigned)gid;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
-(NSArray *)groupMembers;
-(NSString *)generatedUID;
-(NSArray *)groupMembership;
-(NSArray *)nestedGroups;
-(void)setGeneratedUID:(NSString *)arg1 ;
-(void)setGroupMembers:(NSArray *)arg1 ;
-(void)setGroupMembership:(NSArray *)arg1 ;
-(void)setNestedGroups:(NSArray *)arg1 ;
@end
