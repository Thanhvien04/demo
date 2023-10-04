
import 'dart:io';

void main(List<String> args) {
  List<String>? dsHoTen = <String>[];
  String name;
  while(true){
    name = NhapHoTen();
    if(name.isEmpty)
      break;
      ThemPhanTu(dsHoTen, name,dsHoTen.length);
  }

  print(dsHoTen);
SapXepDSHoTen(dsHoTen);
print("Danh sach sau khi sap xep :");
  print(dsHoTen);
  print("Nhap vi tri muon xoa: ");
  String? vitri = stdin.readLineSync();
  if(vitri!=null ){
    XoaPhanTu(dsHoTen, int.parse(vitri));
    print("Danh sach sau khi xoa :");
      print(dsHoTen);
  }
}

NhapHoTen(){
  stdout.write("Nhap ho ten: ");
  String? fullName = stdin.readLineSync();
  return fullName;
}

ThemPhanTu(List<String> dsHoTen, String hoTen, int vitri){
  dsHoTen.insert(vitri, hoTen);
}

XoaPhanTu(List<String> dsHoTen, vitri){
  dsHoTen.removeAt(vitri);
}

SapXepDSHoTen(List<String> dsHoTen){
  dsHoTen.sort((a,b){
    var hoTen = TachHoTen(a.toString());
    var hoTen_2 = TachHoTen(b.toString());
    if(hoTen.Ten.toString().compareTo(hoTen_2.Ten.toString())!=0){
      return hoTen.Ten.compareTo(hoTen_2.Ten);
    }
    return hoTen.Ho.toString().compareTo(hoTen_2.Ho.toString());
  });
  
}

TachHoTen(String? s){
  int vt = s!.lastIndexOf(' ');
  return(Ho:s.substring(0,vt),Ten:s.substring(vt));

}



