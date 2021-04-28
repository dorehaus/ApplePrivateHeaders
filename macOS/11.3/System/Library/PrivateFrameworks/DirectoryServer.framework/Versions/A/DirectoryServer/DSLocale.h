/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DirectoryServer.framework/Versions/A/DirectoryServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, DSLog, ODNode, ODRecord;

@interface DSLocale : NSObject {

	NSString* _name;
	DSLog* _log;
	ODNode* _node;
	ODRecord* _groupRec;
	NSString* _groupRecName;

}

@property (retain) DSLog * log;                          //@synthesize log=_log - In the implementation block
@property (retain) ODNode * node;                        //@synthesize node=_node - In the implementation block
@property (retain) ODRecord * groupRec;                  //@synthesize groupRec=_groupRec - In the implementation block
@property (retain) NSString * groupRecName;              //@synthesize groupRecName=_groupRecName - In the implementation block
@property (retain) NSString * name;                      //@synthesize name=_name - In the implementation block
+(id)localeLog;
+(void)localeifyIfNeeded:(id)arg1 ;
+(id)localeByFindingExistingLocaleWithGroupRec:(id)arg1 ;
+(unsigned)pickGID;
+(id)localeByCreatingNewLocaleWithName:(id)arg1 ;
+(id)localeByFindingExistingLocaleWithName:(id)arg1 ;
+(BOOL)hasBeenLocalified:(id)arg1 ;
+(void)createLocaleConfig:(id)arg1 ;
+(void)createInterfaceLocales;
+(BOOL)addLocaleOverlay;
+(id)getAllLocales;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(ODNode *)node;
-(DSLog *)log;
-(void)setLog:(DSLog *)arg1 ;
-(void)setNode:(ODNode *)arg1 ;
-(void)setComment:(id)arg1 ;
-(id)initByFindingExistingLocaleWithName:(id)arg1 ;
-(id)initByFindingExistingLocaleWithGroupRec:(id)arg1 ;
-(id)initByCreatingNewLocaleWithName:(id)arg1 ;
-(void)setGroupRecName:(NSString *)arg1 ;
-(id)getLocaleGroupRec;
-(void)setGroupRec:(ODRecord *)arg1 ;
-(ODRecord *)groupRec;
-(id)createLocaleGroupRec;
-(BOOL)isDefaultLocale;
-(id)getServerNames;
-(id)getIPAddrsForServer:(id)arg1 ;
-(void)removeServer:(id)arg1 withIPAddr:(id)arg2 ;
-(id)getSubnets;
-(id)getServerDict:(id)arg1 ;
-(id)getServerRec:(id)arg1 ;
-(char)serverExistsInLocale:(id)arg1 withIPAddr:(id)arg2 ;
-(void)updateXMLPlistInCompRec:(id)arg1 withIPAddr:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSString *)groupRecName;
-(id)getAllServerRecs;
-(id)getNormalizedServerName:(id)arg1 ;
-(void)addSubnet:(id)arg1 ;
-(void)addServer:(id)arg1 withIPAddr:(id)arg2 ;
-(void)deleteLocale;
-(id)getComment;
-(void)removeSubnet:(id)arg1 ;
@end

