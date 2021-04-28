/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/ACAccountStore.h>
#import <libobjc.A.dylib/ACRemoteAccountStoreProtocol.h>

@protocol ACDAccountStoreDelegate;
@class NSMutableArray, ACDDatabaseConnection, ACDClientAuthorizationManager, ACDFakeRemoteAccountStoreSession, ACDClient, ACRemoteDeviceProxy, ACDAuthenticationPluginManager, ACDAccessPluginManager, ACDDataclassOwnersManager, ACDAuthenticationDialogManager, ACDAccountNotifier, ACDDatabaseBackupActivity, NSString;

@interface ACDAccountStore : ACAccountStore <ACRemoteAccountStoreProtocol> {

	NSMutableArray* _accountChanges;
	ACDDatabaseConnection* _databaseConnection;
	ACDClientAuthorizationManager* _authorizationManager;
	ACDFakeRemoteAccountStoreSession* _fakeRemoteAccountStoreSession;
	char _notificationsEnabled;
	char _migrationInProgress;
	id<ACDAccountStoreDelegate> _delegate;
	ACDClient* _client;
	ACRemoteDeviceProxy* _remoteDeviceProxy;
	ACDAuthenticationPluginManager* _authenticationPluginManager;
	ACDAccessPluginManager* _accessPluginManager;
	ACDDataclassOwnersManager* _dataclassOwnersManager;
	ACDAuthenticationDialogManager* _authenticationDialogManager;
	ACDAccountNotifier* _accountNotifier;
	ACDDatabaseBackupActivity* _databaseBackupActivity;

}

@property (nonatomic,readonly) ACDDatabaseConnection * databaseConnection;                    //@synthesize databaseConnection=_databaseConnection - In the implementation block
@property (retain) ACDAuthenticationPluginManager * authenticationPluginManager;              //@synthesize authenticationPluginManager=_authenticationPluginManager - In the implementation block
@property (retain) ACDAccessPluginManager * accessPluginManager;                              //@synthesize accessPluginManager=_accessPluginManager - In the implementation block
@property (retain) ACDDataclassOwnersManager * dataclassOwnersManager;                        //@synthesize dataclassOwnersManager=_dataclassOwnersManager - In the implementation block
@property (retain) ACDAuthenticationDialogManager * authenticationDialogManager;              //@synthesize authenticationDialogManager=_authenticationDialogManager - In the implementation block
@property (retain) ACRemoteDeviceProxy * remoteDeviceProxy;                                   //@synthesize remoteDeviceProxy=_remoteDeviceProxy - In the implementation block
@property (retain) ACDAccountNotifier * accountNotifier;                                      //@synthesize accountNotifier=_accountNotifier - In the implementation block
@property (retain) ACDDatabaseBackupActivity * databaseBackupActivity;                        //@synthesize databaseBackupActivity=_databaseBackupActivity - In the implementation block
@property (assign) char notificationsEnabled;                                                 //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (getter=isMigrationInProgress) char migrationInProgress;                            //@synthesize migrationInProgress=_migrationInProgress - In the implementation block
@property (__weak) id<ACDAccountStoreDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (__weak) ACDClient * client;                                                        //@synthesize client=_client - In the implementation block
@property (readonly) ACDClientAuthorizationManager * authorizationManager;                    //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<ACDAccountStoreDelegate>)delegate;
-(void)setDelegate:(id<ACDAccountStoreDelegate>)arg1 ;
-(ACDClient *)client;
-(void)setClient:(ACDClient *)arg1 ;
-(ACDClientAuthorizationManager *)authorizationManager;
-(void)setNotificationsEnabled:(char)arg1 ;
-(char)notificationsEnabled;
-(id)_accountWithIdentifier:(id)arg1 ;
-(id)accountTypeWithIdentifier:(id)arg1 ;
-(void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleURL:(id)arg1 ;
-(id)initWithClient:(id)arg1 databaseConnection:(id)arg2 ;
-(id)_accountTypeWithIdentifier:(id)arg1 ;
-(ACDAccountNotifier *)accountNotifier;
-(id)_childAccountsForAccountWithID:(id)arg1 ;
-(char)isMigrationInProgress;
-(char)_performDataclassActions:(id)arg1 forAccount:(id)arg2 error:(id*)arg3 ;
-(id)_clientTokenQueue;
-(void)_removeClientTokenForAccountIdentifer:(id)arg1 ;
-(void)_delegate_accountStoreDidSaveAccount:(id)arg1 changeType:(int)arg2 ;
-(id)_accountWithIdentifier:(id)arg1 prefetchKeypaths:(id)arg2 ;
-(ACDDataclassOwnersManager *)dataclassOwnersManager;
-(id)_addAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3 ;
-(void)_setAccountManagedObjectRelationships:(id)arg1 withAccount:(id)arg2 oldAccount:(id)arg3 error:(id*)arg4 ;
-(id)_commitOrRollbackDataclassActions:(id)arg1 forAccount:(id)arg2 originalEnabledDataclasses:(id)arg3 ;
-(char)_updateAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3 ;
-(void)_deleteAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3 ;
-(id)_displayAccountForAccount:(id)arg1 ;
-(id)_dataclassWithName:(id)arg1 createIfNecessary:(char)arg2 ;
-(void)_updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(char)_saveWithError:(id*)arg1 ;
-(id)_allAccounts_sync;
-(id)_legacyCredentialForAccount:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)_credentialItemWithAccountIdentifier:(id)arg1 serviceName:(id)arg2 ;
-(id)_accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_predicateForFetchingAccountsWithManagedAccountTypeID:(id)arg1 options:(unsigned long long)arg2 ;
-(char)_canManagedAccountType:(id)arg1 syncManagedDataclass:(id)arg2 ;
-(char)_isManagedAccount:(id)arg1 enabledForManagedDataclass:(id)arg2 ;
-(char)accountsExistWithAccountTypeIdentifier:(id)arg1 ;
-(id)accountsWithAccountTypeIdentifier:(id)arg1 ;
-(char)_removeAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 withError:(id*)arg3 ;
-(char)shouldPreventAccountCreationWithObsoleteAccountType;
-(char)_canSaveAccount:(id)arg1 error:(id*)arg2 ;
-(void)saveAccount:(id)arg1 verify:(char)arg2 dataclassActions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_completeSave:(id)arg1 dataclassActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_lockForAccountType:(id)arg1 ;
-(char)_handleAccountAdd:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3 ;
-(char)_handleAccountMod:(id)arg1 withDataclassActions:(id)arg2 withError:(id*)arg3 ;
-(void)_requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 allowUserInteraction:(char)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)_clientTokenForAccountIdentifier:(id)arg1 error:(id)arg2 ;
-(id)remoteAccountStoreSession;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(ACDDatabaseBackupActivity *)databaseBackupActivity;
-(void)setClientBundleID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)accountsWithHandler:(/*^block*/id)arg1 ;
-(void)accountTypesWithHandler:(/*^block*/id)arg1 ;
-(void)accountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountsWithAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountExistsWithDescription:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountsOnPairedDeviceWithAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountTypeWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)credentialForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)credentialForAccount:(id)arg1 serviceID:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)credentialItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)insertCredentialItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveCredentialItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCredentialItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dataclassesWithHandler:(/*^block*/id)arg1 ;
-(void)supportedDataclassesForAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)syncableDataclassesForAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)preloadDataclassOwnersWithCompletion:(/*^block*/id)arg1 ;
-(void)dataclassActionsForAccountSave:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dataclassActionsForAccountDeletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accessKeysForAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)canSaveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)insertAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)removeAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)appPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)permissionForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)grantedPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)typeIdentifierForDomain:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)migrateCredentialForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isPushSupportedForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clientTokenForAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 ;
-(void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAccountsFromPairedDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)triggerKeychainMigrationIfNecessary:(/*^block*/id)arg1 ;
-(void)scheduleBackupIfNonexistent:(/*^block*/id)arg1 ;
-(void)shutdownAccountsD:(/*^block*/id)arg1 ;
-(void)registerMonitorForAccountsOfTypes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetDatabaseToVersion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addAccountNoSave:(id)arg1 error:(id*)arg2 ;
-(void)updateAccountNoSave:(id)arg1 error:(id*)arg2 ;
-(void)deleteAccountNoSave:(id)arg1 error:(id*)arg2 ;
-(id)masterCredentialForAccountIdentifier:(id)arg1 ;
-(id)_accountsWithAcountType:(id)arg1 error:(id*)arg2 ;
-(void)saveAccount:(id)arg1 pid:(id)arg2 verify:(char)arg3 dataclassActions:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)longLivedRemoteAccountStoreSession;
-(ACRemoteDeviceProxy *)remoteDeviceProxy;
-(void)setRemoteDeviceProxy:(ACRemoteDeviceProxy *)arg1 ;
-(ACDDatabaseConnection *)databaseConnection;
-(ACDAuthenticationPluginManager *)authenticationPluginManager;
-(void)setAuthenticationPluginManager:(ACDAuthenticationPluginManager *)arg1 ;
-(ACDAccessPluginManager *)accessPluginManager;
-(void)setAccessPluginManager:(ACDAccessPluginManager *)arg1 ;
-(void)setDataclassOwnersManager:(ACDDataclassOwnersManager *)arg1 ;
-(ACDAuthenticationDialogManager *)authenticationDialogManager;
-(void)setAuthenticationDialogManager:(ACDAuthenticationDialogManager *)arg1 ;
-(void)setAccountNotifier:(ACDAccountNotifier *)arg1 ;
-(void)setDatabaseBackupActivity:(ACDDatabaseBackupActivity *)arg1 ;
-(void)setMigrationInProgress:(char)arg1 ;
@end

