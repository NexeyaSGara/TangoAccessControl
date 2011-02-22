static const char *RcsId     = "$Header$";
static const char *TagName   = "$Name$";
static const char *HttpServer= "http://www.esrf.fr/computing/cs/tango/tango_doc/ds_doc/";
//+=============================================================================
//
// file :        TangoAccessControlClass.cpp
//
// description : C++ source for the TangoAccessControlClass. A singleton
//               class derived from DeviceClass. It implements the
//               command list and all properties and methods required
//               by the TangoAccessControl once per process.
//
// project :     TANGO Device Server
//
// $Author$
//
// $Revision$
//
// $Log$
// Revision 1.1.1.1  2006/09/15 11:55:43  pascal_verdier
// Initial Revision
//
//
// copyleft :   European Synchrotron Radiation Facility
//              BP 220, Grenoble 38043
//              FRANCE
//
//-=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================


#include <tango.h>

#include <TangoAccessControl.h>
#include <TangoAccessControlClass.h>


//+----------------------------------------------------------------------------
/**
 *	Create TangoAccessControlClass singleton and return it in a C function for Python usage
 */
//+----------------------------------------------------------------------------
extern "C" {
#ifdef WIN32

__declspec(dllexport)

#endif

	Tango::DeviceClass *_create_TangoAccessControl_class(const char *name) {
		return TangoAccessControl_ns::TangoAccessControlClass::init(name);
	}
}


namespace TangoAccessControl_ns
{
//+----------------------------------------------------------------------------
//
// method : 		UnregisterServiceClass::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be excuted
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *UnregisterServiceClass::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "UnregisterServiceClass::execute(): arrived" << endl;

	((static_cast<TangoAccessControl *>(device))->unregister_service());
	return new CORBA::Any();
}

//+----------------------------------------------------------------------------
//
// method : 		RegisterServiceCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be excuted
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *RegisterServiceCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "RegisterServiceCmd::execute(): arrived" << endl;

	((static_cast<TangoAccessControl *>(device))->register_service());
	return new CORBA::Any();
}


//+----------------------------------------------------------------------------
//
// method : 		AddAddressForUserCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be excuted
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *AddAddressForUserCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "AddAddressForUserCmd::execute(): arrived" << endl;

	const Tango::DevVarStringArray	*argin;
	extract(in_any, argin);

	((static_cast<TangoAccessControl *>(device))->add_address_for_user(argin));
	return new CORBA::Any();
}

//+----------------------------------------------------------------------------
//
// method : 		AddDeviceForUserClass::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be excuted
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *AddDeviceForUserClass::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "AddDeviceForUserClass::execute(): arrived" << endl;

	const Tango::DevVarStringArray	*argin;
	extract(in_any, argin);

	((static_cast<TangoAccessControl *>(device))->add_device_for_user(argin));
	return new CORBA::Any();
}

//+----------------------------------------------------------------------------
//
// method : 		CloneUserCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be excuted
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *CloneUserCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "CloneUserCmd::execute(): arrived" << endl;

	const Tango::DevVarStringArray	*argin;
	extract(in_any, argin);

	((static_cast<TangoAccessControl *>(device))->clone_user(argin));
	return new CORBA::Any();
}

//+----------------------------------------------------------------------------
//
// method : 		GetAccessCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be excuted
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *GetAccessCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "GetAccessCmd::execute(): arrived" << endl;

	const Tango::DevVarStringArray	*argin;
	extract(in_any, argin);

	return insert((static_cast<TangoAccessControl *>(device))->get_access(argin));
}

//+----------------------------------------------------------------------------
//
// method : 		GetAddressByUserClass::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be excuted
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *GetAddressByUserClass::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "GetAddressByUserClass::execute(): arrived" << endl;

	Tango::DevString	argin;
	extract(in_any, argin);

	return insert((static_cast<TangoAccessControl *>(device))->get_address_by_user(argin));
}

//+----------------------------------------------------------------------------
//
// method : 		GetAllowedCommandsClass::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be excuted
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *GetAllowedCommandsClass::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "GetAllowedCommandsClass::execute(): arrived" << endl;

	Tango::DevString	argin;
	extract(in_any, argin);

	return insert((static_cast<TangoAccessControl *>(device))->get_allowed_commands(argin));
}

//+----------------------------------------------------------------------------
//
// method : 		GetDeviceByUserClass::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be excuted
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *GetDeviceByUserClass::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "GetDeviceByUserClass::execute(): arrived" << endl;

	Tango::DevString	argin;
	extract(in_any, argin);

	return insert((static_cast<TangoAccessControl *>(device))->get_device_by_user(argin));
}

//+----------------------------------------------------------------------------
//
// method : 		GetDeviceClassCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be excuted
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *GetDeviceClassCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "GetDeviceClassCmd::execute(): arrived" << endl;

	Tango::DevString	argin;
	extract(in_any, argin);

	return insert((static_cast<TangoAccessControl *>(device))->get_device_class(argin));
}

//+----------------------------------------------------------------------------
//
// method : 		GetUsersClass::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be excuted
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *GetUsersClass::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "GetUsersClass::execute(): arrived" << endl;

	return insert((static_cast<TangoAccessControl *>(device))->get_users());
}

//+----------------------------------------------------------------------------
//
// method : 		RemoveAddressForUserClass::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be excuted
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *RemoveAddressForUserClass::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "RemoveAddressForUserClass::execute(): arrived" << endl;

	const Tango::DevVarStringArray	*argin;
	extract(in_any, argin);

	((static_cast<TangoAccessControl *>(device))->remove_address_for_user(argin));
	return new CORBA::Any();
}

//+----------------------------------------------------------------------------
//
// method : 		RemoveDeviceForUserClass::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be excuted
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *RemoveDeviceForUserClass::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "RemoveDeviceForUserClass::execute(): arrived" << endl;

	const Tango::DevVarStringArray	*argin;
	extract(in_any, argin);

	((static_cast<TangoAccessControl *>(device))->remove_device_for_user(argin));
	return new CORBA::Any();
}

//+----------------------------------------------------------------------------
//
// method : 		RemoveUserClass::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be excuted
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *RemoveUserClass::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "RemoveUserClass::execute(): arrived" << endl;

	Tango::DevString	argin;
	extract(in_any, argin);

	((static_cast<TangoAccessControl *>(device))->remove_user(argin));
	return new CORBA::Any();
}


//
//----------------------------------------------------------------
//	Initialize pointer for singleton pattern
//----------------------------------------------------------------
//
TangoAccessControlClass *TangoAccessControlClass::_instance = NULL;

//+----------------------------------------------------------------------------
//
// method : 		TangoAccessControlClass::TangoAccessControlClass(string &s)
// 
// description : 	constructor for the TangoAccessControlClass
//
// in : - s : The class name
//
//-----------------------------------------------------------------------------
TangoAccessControlClass::TangoAccessControlClass(string &s):DeviceClass(s)
{

	cout2 << "Entering TangoAccessControlClass constructor" << endl;
	set_default_property();
	write_class_property();
	get_class_property();
	
	cout2 << "Leaving TangoAccessControlClass constructor" << endl;

}
//+----------------------------------------------------------------------------
//
// method : 		TangoAccessControlClass::~TangoAccessControlClass()
// 
// description : 	destructor for the TangoAccessControlClass
//
//-----------------------------------------------------------------------------
TangoAccessControlClass::~TangoAccessControlClass()
{
	_instance = NULL;
}

//+----------------------------------------------------------------------------
//
// method : 		TangoAccessControlClass::instance
// 
// description : 	Create the object if not already done. Otherwise, just
//			return a pointer to the object
//
// in : - name : The class name
//
//-----------------------------------------------------------------------------
TangoAccessControlClass *TangoAccessControlClass::init(const char *name)
{
	if (_instance == NULL)
	{
		try
		{
			string s(name);
			_instance = new TangoAccessControlClass(s);
		}
		catch (bad_alloc)
		{
			throw;
		}		
	}		
	return _instance;
}

TangoAccessControlClass *TangoAccessControlClass::instance()
{
	if (_instance == NULL)
	{
		cerr << "Class is not initialised !!" << endl;
		exit(-1);
	}
	return _instance;
}

//+----------------------------------------------------------------------------
//
// method : 		TangoAccessControlClass::command_factory
// 
// description : 	Create the command object(s) and store them in the 
//			command list
//
//-----------------------------------------------------------------------------
void TangoAccessControlClass::command_factory()
{
	command_list.push_back(new AddAddressForUserCmd("AddAddressForUser",
		Tango::DEVVAR_STRINGARRAY, Tango::DEV_VOID,
		"user name, address",
		"",
		Tango::OPERATOR));
	command_list.push_back(new AddDeviceForUserClass("AddDeviceForUser",
		Tango::DEVVAR_STRINGARRAY, Tango::DEV_VOID,
		"user name, device adn value",
		"",
		Tango::OPERATOR));
	command_list.push_back(new CloneUserCmd("CloneUser",
		Tango::DEVVAR_STRINGARRAY, Tango::DEV_VOID,
		"[0] - source user name.\n[1] - target user name.",
		"",
		Tango::OPERATOR));
	command_list.push_back(new GetAccessCmd("GetAccess",
		Tango::DEVVAR_STRINGARRAY, Tango::DEV_STRING,
		"[0] - User name\n[1] - Device\n[2] - IP Address",
		"cess for specified inputs.",
		Tango::OPERATOR));
	command_list.push_back(new GetAddressByUserClass("GetAddressByUser",
		Tango::DEV_STRING, Tango::DEVVAR_STRINGARRAY,
		"user name.",
		"Addresses found for the specified user.",
		Tango::OPERATOR));
	command_list.push_back(new GetAllowedCommandsClass("GetAllowedCommands",
		Tango::DEV_STRING, Tango::DEVVAR_STRINGARRAY,
		"Device name",
		"Allowed commands found in database for specified device",
		Tango::OPERATOR));
	command_list.push_back(new GetDeviceByUserClass("GetDeviceByUser",
		Tango::DEV_STRING, Tango::DEVVAR_STRINGARRAY,
		"user name.",
		"devices and rights found for the specified user.",
		Tango::OPERATOR));
	command_list.push_back(new GetDeviceClassCmd("GetDeviceClass",
		Tango::DEV_STRING, Tango::DEV_STRING,
		"Device name",
		"Class found in database for specified device",
		Tango::OPERATOR));
	command_list.push_back(new GetUsersClass("GetUsers",
		Tango::DEV_VOID, Tango::DEVVAR_STRINGARRAY,
		"",
		"Users find in table access_address.",
		Tango::OPERATOR));
	command_list.push_back(new RemoveAddressForUserClass("RemoveAddressForUser",
		Tango::DEVVAR_STRINGARRAY, Tango::DEV_VOID,
		"user name, address",
		"",
		Tango::OPERATOR));
	command_list.push_back(new RemoveDeviceForUserClass("RemoveDeviceForUser",
		Tango::DEVVAR_STRINGARRAY, Tango::DEV_VOID,
		"user name, device and value",
		"",
		Tango::OPERATOR));
	command_list.push_back(new RemoveUserClass("RemoveUser",
		Tango::DEV_STRING, Tango::DEV_VOID,
		"user name",
		"",
		Tango::OPERATOR));
	command_list.push_back(new RegisterServiceCmd("RegisterService",
		Tango::DEV_VOID, Tango::DEV_VOID,
		"",
		"",
		Tango::OPERATOR));
	command_list.push_back(new UnregisterServiceClass("UnregisterService",
		Tango::DEV_VOID, Tango::DEV_VOID,
		"",
		"",
		Tango::OPERATOR));

	//	add polling if any
	for (unsigned int i=0 ; i<command_list.size(); i++)
	{
	}
}

//+----------------------------------------------------------------------------
//
// method : 		TangoAccessControlClass::get_class_property
// 
// description : 	Get the class property for specified name.
//
// in :		string	name : The property name
//
//+----------------------------------------------------------------------------
Tango::DbDatum TangoAccessControlClass::get_class_property(string &prop_name)
{
	for (int i=0 ; i<cl_prop.size() ; i++)
		if (cl_prop[i].name == prop_name)
			return cl_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}
//+----------------------------------------------------------------------------
//
// method : 		TangoAccessControlClass::get_default_device_property()
// 
// description : 	Return the default value for device property.
//
//-----------------------------------------------------------------------------
Tango::DbDatum TangoAccessControlClass::get_default_device_property(string &prop_name)
{
	for (int i=0 ; i<dev_def_prop.size() ; i++)
		if (dev_def_prop[i].name == prop_name)
			return dev_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//+----------------------------------------------------------------------------
//
// method : 		TangoAccessControlClass::get_default_class_property()
// 
// description : 	Return the default value for class property.
//
//-----------------------------------------------------------------------------
Tango::DbDatum TangoAccessControlClass::get_default_class_property(string &prop_name)
{
	for (int i=0 ; i<cl_def_prop.size() ; i++)
		if (cl_def_prop[i].name == prop_name)
			return cl_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}
//+----------------------------------------------------------------------------
//
// method : 		TangoAccessControlClass::device_factory
// 
// description : 	Create the device object(s) and store them in the 
//			device list
//
// in :		Tango::DevVarStringArray *devlist_ptr : The device name list
//
//-----------------------------------------------------------------------------
void TangoAccessControlClass::device_factory(const Tango::DevVarStringArray *devlist_ptr)
{

	//	Create all devices.(Automatic code generation)
	//-------------------------------------------------------------
	for (unsigned long i=0 ; i < devlist_ptr->length() ; i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i].in() << endl;
						
		// Create devices and add it into the device list
		//----------------------------------------------------
		device_list.push_back(new TangoAccessControl(this, (*devlist_ptr)[i]));							 

		// Export device to the outside world
		// Check before if database used.
		//---------------------------------------------
		if ((Tango::Util::_UseDb == true) && (Tango::Util::_FileDb == false))
			export_device(device_list.back());
		else
			export_device(device_list.back(), (*devlist_ptr)[i]);
	}
	//	End of Automatic code generation
	//-------------------------------------------------------------

}





//+----------------------------------------------------------------------------
//
// method : 		TangoAccessControlClass::get_class_property()
// 
// description : 	Read the class properties from database.
//
//-----------------------------------------------------------------------------
void TangoAccessControlClass::get_class_property()
{
	//	Initialize your default values here (if not done with  POGO).
	//------------------------------------------------------------------

	//	Read class properties from database.(Automatic code generation)
	//------------------------------------------------------------------

	//	Call database and extract values
	//--------------------------------------------
	if (Tango::Util::instance()->_UseDb==true)
		get_db_class()->get_property(cl_prop);
	Tango::DbDatum	def_prop;
	int	i = -1;


	//	End of Automatic code generation
	//------------------------------------------------------------------

}

//+----------------------------------------------------------------------------
//
// method : 	TangoAccessControlClass::set_default_property
// 
// description: Set default property (class and device) for wizard.
//              For each property, add to wizard property name and description
//              If default value has been set, add it to wizard property and
//              store it in a DbDatum.
//
//-----------------------------------------------------------------------------
void TangoAccessControlClass::set_default_property()
{
	string	prop_name;
	string	prop_desc;
	string	prop_def;

	vector<string>	vect_data;
	//	Set Default Class Properties
	//	Set Default Device Properties
}
//+----------------------------------------------------------------------------
//
// method : 		TangoAccessControlClass::write_class_property
// 
// description : 	Set class description as property in database
//
//-----------------------------------------------------------------------------
void TangoAccessControlClass::write_class_property()
{
	//	First time, check if database used
	//--------------------------------------------
	if (Tango::Util::_UseDb == false)
		return;

	Tango::DbData	data;
	string	classname = get_name();
	string	header;
	string::size_type	start, end;

	//	Put title
	Tango::DbDatum	title("ProjectTitle");
	string	str_title("Tango Access Control Management");
	title << str_title;
	data.push_back(title);

	//	Put Description
	Tango::DbDatum	description("Description");
	vector<string>	str_desc;
	str_desc.push_back("Yhis class is a conceate class inherited from AccessControl abstract class.<Br>");
	str_desc.push_back("<Br>");
	str_desc.push_back("This class defines how to manage the TANGO access control.<Br>");
	str_desc.push_back("It implements commands for tool to defines access for users, devices and IP addresses.<Br>");
	str_desc.push_back("It implements also commands used by client API to check access for specified user, device and address.<Br>");
	str_desc.push_back("And it implements register and unregister it as TANGO service.");
	description << str_desc;
	data.push_back(description);
		
	//	put cvs location
	string	rcsId(RcsId);
	string	filename(classname);
	start = rcsId.find("/");
	if (start!=string::npos)
	{
		filename += "Class.cpp";
		end   = rcsId.find(filename);
		if (end>start)
		{
			string	strloc = rcsId.substr(start, end-start);
			//	Check if specific repository
			start = strloc.find("/cvsroot/");
			if (start!=string::npos && start>0)
			{
				string	repository = strloc.substr(0, start);
				if (repository.find("/segfs/")!=string::npos)
					strloc = "ESRF:" + strloc.substr(start, strloc.length()-start);
			}
			Tango::DbDatum	cvs_loc("cvs_location");
			cvs_loc << strloc;
			data.push_back(cvs_loc);
		}
	}

	//	Get CVS tag revision
	string	tagname(TagName);
	header = "$Name: ";
	start = header.length();
	string	endstr(" $");
	end   = tagname.find(endstr);
	if (end!=string::npos && end>start)
	{
		string	strtag = tagname.substr(start, end-start);
		Tango::DbDatum	cvs_tag("cvs_tag");
		cvs_tag << strtag;
		data.push_back(cvs_tag);
	}

	//	Get URL location
	string	httpServ(HttpServer);
	if (httpServ.length()>0)
	{
		Tango::DbDatum	db_doc_url("doc_url");
		db_doc_url << httpServ;
		data.push_back(db_doc_url);
	}

	//	Call database and and values
	//--------------------------------------------
	get_db_class()->put_property(data);
}

}	// namespace
