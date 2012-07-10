//
//  QBUsersService.h
//  UsersService
//

//  Copyright 2011 QuickBlox team. All rights reserved.
//

#import <Foundation/Foundation.h>

/** QBUsersService class declaration. */
/** Overview */
/** This class is the main entry point to work with Quickblox Users module, user data and profiles management. */

@interface QBUsersService : BaseService {

}


#pragma mark -
#pragma mark Current User

/**
 Get current loggedin user instance
 
 @return An instance of current loggedin user instance
 */
+ (QBUUser *)currentUser;
+ (void)setCurrentUser:(QBUUser *) user;


#pragma mark -
#pragma mark LogIn

/**
 User LogIn
 
 Type of Result - QBUUserLogInResult
 
 @param login Login of QBUUser which authenticates.
 @param password Password of QBUUser which authenticates.
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserAuthenticateResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)logInWithUserLogin:(NSString *)login password:(NSString *)password delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)logInWithUserLogin:(NSString *)login password:(NSString *)password delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark LogOut

/**
 User LogOut
 
 Type of Result - QBUUserLogOutResult
 
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserLogoutResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)logOutWithDelegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)logOutWithDelegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Get all Users for current application

/**
 Retrieve all Users for current account (last 10 users, for more - use equivalent method with 'pagedRequest' argument)
 
 Type of Result - QBUUserPagedResult
 
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserPagedResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)usersWithDelegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)usersWithDelegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;

/**
 Retrieve all Users for current account (with extended set of pagination parameters)
 
 Type of Result - QBUUserPagedResult
 
 @param pagedRequest paged request
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserPagedResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)usersWithPagedRequest:(PagedRequest *)pagedRequest delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)usersWithPagedRequest:(PagedRequest *)pagedRequest delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Create User

/**
 User sign up
 
 Type of Result - QBUUserResult
 
 @param user An instance of QBUUser, describing the user to be created.
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)signUp:(QBUUser *)user delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)signUp:(QBUUser *)user delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Get User with ID

/**
 Retrieve User by identifier
 
 Type of Result - QBUUserResult
 
 @param userID ID of user to be retrieved.
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)userWithID:(NSUInteger)userID delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)userWithID:(NSUInteger)userID delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Get User with login

/**
 Retrieve User by login
 
 Type of Result - QBUUserResult
 
 @param userLogin Login of user to be retrieved.
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)userWithLogin:(NSString *)userLogin delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)userWithLogin:(NSString *)userLogin delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Get Users with full name

/**
 Retrieve Users by full name for current account (last 10 users, for more - use equivalent method with 'pagedRequest' argument)
 
 Type of Result - QBUUserPagedResult
 
 
 @param userFullName Full name of users to be retrieved.
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserPagedResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)usersWithFullName:(NSString *)userFullName delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)usersWithFullName:(NSString *)userFullName delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;

/**
 Retrieve Users by full name for current account (with extended set of pagination parameters)
 
 Type of Result - QBUUserPagedResult
 
 @param userFullName Full name of users to be retrieved.
 @param pagedRequest paged request
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserPagedResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)usersWithFullName:(NSString *)userFullName pagedRequest:(PagedRequest *)pagedRequest delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)usersWithFullName:(NSString *)userFullName pagedRequest:(PagedRequest *)pagedRequest delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Get Users with tags

/**
 Retrieve Users by tags for current account (last 10 users, for more - use equivalent method with 'pagedRequest' argument)
 
 Type of Result - QBUUserPagedResult
 
 
 @param tags Tags of users to be retrieved.
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserPagedResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)usersWithTags:(NSArray *)tags delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)usersWithTags:(NSArray *)tags delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;

/**
 Retrieve Users by tags for current account (with extended set of pagination parameters)
 
 Type of Result - QBUUserPagedResult
 
 @param tags Tags of users to be retrieved.
 @param pagedRequest paged request
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserPagedResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)usersWithTags:(NSArray *)tags pagedRequest:(PagedRequest *)pagedRequest delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)usersWithTags:(NSArray *)tags pagedRequest:(PagedRequest *)pagedRequest delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Get User with Facebook ID

/**
 Retrieve User by Facebook ID
 
 Type of Result - QBUUserResult
 
 @param userFacebookID Facebook ID of user to be retrieved.
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)userWithFacebookID:(NSString *)userFacebookID delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)userWithFacebookID:(NSString *)userFacebookID delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Get User with Twitter ID

/**
 Retrieve User by Twitter ID
 
 Type of Result - QBUUserResult
 
 @param userTwitterID Twitter ID of user to be retrieved.
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)userWithTwitterID:(NSString *)userTwitterID delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)userWithTwitterID:(NSString *)userTwitterID delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Get User with email

/**
 Retrieve User by Email
 
 Type of Result - QBUUserResult
 
 @param userEmail Email of user to be retrieved.
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)userWithEmail:(NSString *)userEmail delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)userWithEmail:(NSString *)userEmail delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Get User with external ID

/**
 Retrieve User by External identifier
 
 Type of Result - QBUUserResult
 
 @param userExternalID External ID of user to be retrieved.
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)userWithExternalID:(NSUInteger)userExternalID delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)userWithExternalID:(NSUInteger)userExternalID delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Update User

/**
 Update User
 
 Type of Result - QBUUserResult
 
 @param user An instance of QBUUser, describing the user to be edited.
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)updateUser:(QBUUser *)user delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)updateUser:(QBUUser *)user delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Delete User

/**
 Delete User by identifier
 
 Type of Result - QBUUserResult
 
 @param userID ID of user to be removed.
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)deleteUserWithID:(NSUInteger)userID delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)deleteUserWithID:(NSUInteger)userID delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Delete User with external ID

/**
 Delete User by external identifier
 
 Type of Result - QBUUserResult
 
 @param userExternalID External ID of user to be removed.
 @param delegate An object for callback, must adopt ActionStatusDelegate protocol. The delegate is not retained.  Upon finish of the request, result will be an instance of QBUUserResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)deleteUserWithExternalID:(NSUInteger)userExternalID delegate:(NSObject<ActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)deleteUserWithExternalID:(NSUInteger)userExternalID delegate:(NSObject<ActionStatusDelegate> *)delegate context:(void *)context;

@end