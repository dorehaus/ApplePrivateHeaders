/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SyncServices/ISyncChange.h>

@class NSString, NSDictionary, NSArray, ISDChange;

@interface ISyncConcreteChange : ISyncChange {

	int _type;
	NSString* _recordId;
	NSDictionary* _record;
	NSArray* _changes;
	int _clientNumber;
	ISDChange* _minglerChange;

}
-(id)copyWithZone:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)type;
-(id)changes;
-(id)_entityName;
-(id)_clientId;
-(void)setRecordIdentifier:(id)arg1 ;
-(id)recordIdentifier;
-(id)record;
-(id)initWithChangeType:(int)arg1 recordIdentifier:(id)arg2 changes:(id)arg3 ;
-(void)_setRecord:(id)arg1 ;
-(id)_minglerChange;
-(id)_propertyChangeForName:(id)arg1 ;
-(int)clientNumber;
-(void)_setClientId:(id)arg1 ;
-(id)_propertyChangeNames;
-(void)setMinglerChange:(id)arg1 ;
@end

