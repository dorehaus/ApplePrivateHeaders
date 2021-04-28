/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/Versions/A/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSKeychainEditingContext, VSKeychainItemKind, NSMutableDictionary, NSData;

@interface VSKeychainItem : NSObject {

	char _inserted;
	char _updated;
	char _deleted;
	char _hasFaultForData;
	VSKeychainEditingContext* _editingContext;
	VSKeychainItemKind* _itemKind;
	NSMutableDictionary* _committedValues;
	NSMutableDictionary* _primitiveValues;

}

@property (nonatomic,retain) NSMutableDictionary * committedValues;                         //@synthesize committedValues=_committedValues - In the implementation block
@property (assign,nonatomic,__weak) VSKeychainEditingContext * editingContext;              //@synthesize editingContext=_editingContext - In the implementation block
@property (assign,getter=isInserted,nonatomic) char inserted;                               //@synthesize inserted=_inserted - In the implementation block
@property (assign,getter=isUpdated,nonatomic) char updated;                                 //@synthesize updated=_updated - In the implementation block
@property (assign,getter=isDeleted,nonatomic) char deleted;                                 //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * primitiveValues;                         //@synthesize primitiveValues=_primitiveValues - In the implementation block
@property (assign,nonatomic) char hasFaultForData;                                          //@synthesize hasFaultForData=_hasFaultForData - In the implementation block
@property (nonatomic,copy,readonly) VSKeychainItemKind * itemKind;                          //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,readonly) char hasChanges; 
@property (nonatomic,readonly) char hasPersistentChangedValues; 
@property (nonatomic,copy) NSData * data; 
-(id)description;
-(id)init;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(char)hasChanges;
-(char)isDeleted;
-(void)willAccessValueForKey:(id)arg1 ;
-(void)didAccessValueForKey:(id)arg1 ;
-(id)primitiveValueForKey:(id)arg1 ;
-(void)setPrimitiveValue:(id)arg1 forKey:(id)arg2 ;
-(void)setDeleted:(char)arg1 ;
-(id)changedValues;
-(id)committedValuesForKeys:(id)arg1 ;
-(char)isUpdated;
-(char)isInserted;
-(void)setUpdated:(char)arg1 ;
-(id)committedValueForKey:(id)arg1 ;
-(char)hasPersistentChangedValues;
-(NSMutableDictionary *)committedValues;
-(VSKeychainItemKind *)itemKind;
-(void)setEditingContext:(VSKeychainEditingContext *)arg1 ;
-(VSKeychainEditingContext *)editingContext;
-(void)setInserted:(char)arg1 ;
-(id)initWithItemKind:(id)arg1 insertIntoEditingContext:(id)arg2 ;
-(void)_setCommittedValues:(id)arg1 registeringUndo:(char)arg2 ;
-(NSMutableDictionary *)primitiveValues;
-(char)hasFaultForData;
-(void)setPrimitiveValues:(NSMutableDictionary *)arg1 ;
-(void)setCommittedValues:(NSMutableDictionary *)arg1 ;
-(void)setHasFaultForData:(char)arg1 ;
@end
