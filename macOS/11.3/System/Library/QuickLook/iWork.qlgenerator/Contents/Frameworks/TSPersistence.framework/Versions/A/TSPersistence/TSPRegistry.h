/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSPersistence/TSPersistence-Structs.h>
@interface TSPRegistry : NSObject {

	unordered_map<unsigned int, const google::protobuf::Message *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, const google::protobuf::Message *>>>* _messageTypeToPrototypeMap;
	unordered_map<const google::protobuf::Descriptor *, unsigned int, TSP::DescriptorHash, std::__1::equal_to<const google::protobuf::Descriptor *>, std::__1::allocator<std::__1::pair<const google::protobuf::Descriptor *const, unsigned int>>>* _descriptorToMessageTypeMap;
	unordered_map<unsigned int, const char *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, const char *>>>* _messageTypeToClassnameMap;
	unordered_map<const char *, unsigned int, TSP::CStringHash, TSP::CStringEqualTo, std::__1::allocator<std::__1::pair<const char *const, unsigned int>>>* _classnameToMessageTypeMap;
	unordered_map<unsigned int, __unsafe_unretained Class, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, __unsafe_unretained Class>>>* _messageTypeToClassMap;

}
+(id)sharedRegistry;
+(void)setInitializationHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)setMessageType:(unsigned)arg1 messagePrototype:(const Message*)arg2 descriptor:(const Descriptor*)arg3 unarchiveClassname:(const char*)arg4 ;
-(void)setUpgradeMessageType:(unsigned)arg1 messagePrototype:(const Message*)arg2 unarchiveClassname:(const char*)arg3 ;
-(void)setOverrideMessageType:(unsigned)arg1 messagePrototype:(const Message*)arg2 descriptor:(const Descriptor*)arg3 unarchiveClassname:(const char*)arg4 ;
-(void)setDeprecatedMessageType:(unsigned)arg1 ;
-(unsigned)messageTypeForUnarchiveClassname:(const char*)arg1 ;
-(const Message*)messagePrototypeForMessageType:(unsigned)arg1 ;
-(unsigned)messageTypeForDescriptor:(const Descriptor*)arg1 ;
-(void)registerPersistenceMessages;
-(void)setUpgradeMessageType:(unsigned)arg1 messagePrototype:(const Message*)arg2 unarchiveClass:(Class)arg3 unarchiveClassname:(const char*)arg4 ;
-(void)resetForMessageType:(unsigned)arg1 descriptor:(const Descriptor*)arg2 ;
-(void)setMessageType:(unsigned)arg1 forUnarchiveClassname:(const char*)arg2 ;
-(void)setOverrideMessageType:(unsigned)arg1 messagePrototype:(const Message*)arg2 descriptor:(const Descriptor*)arg3 ;
-(Class)unarchiveClassForMessageType:(unsigned)arg1 ;
@end

