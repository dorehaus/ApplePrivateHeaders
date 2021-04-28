/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CNContactStore, CNContact, CNContactProperty;

@interface CNFavoritesEntry : NSObject {

	NSString* _name;
	char _dirty;
	int _abUid;
	int _abIdentifier;
	int _oldAbUid;
	NSString* _value;
	NSString* _actionType;
	NSString* _bundleIdentifier;
	long long _type;
	CNContactStore* _contactStore;
	NSString* _label;
	NSString* _propertyKey;
	NSString* _abDatabaseUUID;
	NSString* _originalName;
	CNContact* _contact;
	NSString* _labeledValueIdentifier;

}

@property (assign,nonatomic) int abUid;                                          //@synthesize abUid=_abUid - In the implementation block
@property (assign,nonatomic) int abIdentifier;                                   //@synthesize abIdentifier=_abIdentifier - In the implementation block
@property (assign,nonatomic) int oldAbUid;                                       //@synthesize oldAbUid=_oldAbUid - In the implementation block
@property (assign,nonatomic) char dirty;                                         //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,retain) NSString * value;                                   //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) CNContactProperty * contactProperty; 
@property (nonatomic,readonly) NSString * actionType; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) long long type; 
+(void)initialize;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)name;
-(long long)type;
-(void)setDirty:(char)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)value;
-(id)dictionaryRepresentation;
-(void)setValue:(NSString *)arg1 ;
-(char)dirty;
-(CNContactProperty *)contactProperty;
-(NSString *)actionType;
-(id)rematch;
-(void)resetContactMatch;
-(void)applyChangeRecord:(id)arg1 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4 store:(id)arg5 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5 store:(id)arg6 ;
-(id)initWithDictionaryRepresentation:(id)arg1 store:(id)arg2 ;
-(void)dictionaryRepresentation:(id*)arg1 isDirty:(char*)arg2 ;
-(char)rematchWithContacts;
-(int)abUid;
-(void)setAbUid:(int)arg1 ;
-(int)abIdentifier;
-(void)setAbIdentifier:(int)arg1 ;
-(int)oldAbUid;
-(void)setOldAbUid:(int)arg1 ;
@end
